#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

typedef struct {
	ngx_http_upstream_conf_t conf;
} ngx_http_hello_loc_conf_t;
extern ngx_module_t ngx_http_hello_module;

static ngx_int_t ngx_http_hello_create_request(ngx_http_request_t *r)
{
	ngx_buf_t *b = ngx_create_temp_buf(r->pool, 1024);
	b->last = ngx_sprintf(b->last, "GET / HTTP/1.1\r\n"
			"Host: localhost\r\n"
			"Connection: close\r\n"
			"\r\n");
	r->upstream->request_bufs = ngx_alloc_chain_link(r->pool);
	r->upstream->request_bufs->next = NULL;
	r->upstream->request_bufs->buf = b;
	
	r->upstream->request_sent = 0;
	r->upstream->header_sent = 0;
	return NGX_OK;

}

static ngx_int_t ngx_http_hello_process_header(ngx_http_request_t *r)
{
	r->upstream->state->status = NGX_HTTP_OK;
	r->upstream->headers_in.status_n = NGX_HTTP_OK;
	return NGX_OK;
}

static void ngx_http_hello_finalize_request(ngx_http_request_t *r, ngx_int_t rc)
{

}

static ngx_int_t ngx_http_hello_handler(ngx_http_request_t *r)
{
	ngx_int_t rc = ngx_http_discard_request_body(r);
	if (rc != NGX_OK) {
		return rc;
	}

	ngx_http_upstream_create(r);
	ngx_http_hello_loc_conf_t *hlcf = ngx_http_get_module_loc_conf(r, ngx_http_hello_module);
	struct sockaddr_in *sda = ngx_pcalloc(r->pool, sizeof(struct sockaddr_in));
	sda->sin_family = AF_INET;
	sda->sin_port = htons(9090);
	sda->sin_addr.s_addr = inet_addr("0.0.0.0");
	r->upstream->resolved = ngx_pcalloc(r->pool, sizeof(ngx_http_upstream_resolved_t));
	r->upstream->resolved->sockaddr = (struct sockaddr*)sda;
	r->upstream->resolved->socklen = sizeof(struct sockaddr_in);
	r->upstream->resolved->naddrs = 1;
	r->upstream->conf = &hlcf->conf;
	r->upstream->buffering = 0;
	r->upstream->create_request = ngx_http_hello_create_request;
	r->upstream->process_header = ngx_http_hello_process_header;
	r->upstream->finalize_request = ngx_http_hello_finalize_request;
	r->main->count++;
	ngx_http_upstream_init(r);
	return NGX_DONE;

#if 0
	r->headers_out.status = NGX_HTTP_OK;
	rc = ngx_http_send_header(r);
	if (rc == NGX_ERROR || rc > NGX_OK || r->header_only) {
		return rc;
	}
#if 0
	ngx_buf_t *b = ngx_create_temp_buf(r->pool, 1024);
	b->last = ngx_snprintf(b->pos, 1024, "hello nginx world!\n");
	b->last_buf = 1;
#endif

#if 0
	char *fn = "html/index.html";

	ngx_buf_t *b = ngx_pcalloc(r->pool, sizeof(ngx_buf_t));
	b->file = ngx_pcalloc(r->pool, sizeof(ngx_file_t));
	b->file->fd = ngx_open_file(fn, NGX_FILE_RDONLY|NGX_FILE_NONBLOCK, NGX_FILE_OPEN, 0);
	b->file->log = r->connection->log;
	ngx_str_set(&b->file->name, fn);
	ngx_file_info(fn, &b->file->info);
	b->file_pos = 0;
	b->file_last = b->file->info.st_size;
	b->in_file = 1;
	b->last_buf = 1;

	ngx_pool_cleanup_t *cln = ngx_pool_cleanup_add(r->pool, sizeof(ngx_pool_cleanup_file_t));
	cln->handler = ngx_pool_cleanup_file;
	ngx_pool_cleanup_file_t *clnf = cln->data;
	clnf->fd = b->file->fd;
	clnf->name = (u_char*)fn;
	clnf->log = r->pool->log;
#endif

	ngx_chain_t c = {.buf = b, .next = NULL};
	return ngx_http_output_filter(r, &c);
#endif
}

static char *ngx_http_hello_set(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
	ngx_http_core_loc_conf_t *clcf = ngx_http_conf_get_module_loc_conf(cf, ngx_http_core_module);
	clcf->handler = ngx_http_hello_handler;
	return NGX_CONF_OK;
}

static ngx_command_t ngx_http_hello_cmd[] = {
	{ ngx_string("hello"),
		NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS,
		ngx_http_hello_set,
		NGX_HTTP_LOC_CONF_OFFSET,
		0,
		NULL
	}, ngx_null_command
};

static void *ngx_http_hello_create_loc(ngx_conf_t *cf)
{
	ngx_http_hello_loc_conf_t *hlcf = ngx_pcalloc(cf->pool, sizeof(ngx_http_hello_loc_conf_t));
	hlcf->conf.connect_timeout = 60000;
	hlcf->conf.send_timeout = 60000;
	hlcf->conf.read_timeout = 60000;
	hlcf->conf.buffer_size = 4096;

	hlcf->conf.hide_headers = NGX_CONF_UNSET_PTR;
	hlcf->conf.pass_headers = NGX_CONF_UNSET_PTR;
	return hlcf;
}

static ngx_str_t hide_headers[] = {
	ngx_null_string
};

static char *ngx_http_hello_merge_loc(ngx_conf_t *cf, void *prev, void *conf)
{
	ngx_hash_init_t h;
	h.name = "ngx_http_hello hide headers";
	h.bucket_size = 1024;
	h.max_size = 32;
	ngx_http_upstream_hide_headers_hash(cf, (ngx_http_upstream_conf_t*)conf, (ngx_http_upstream_conf_t*)prev,
			hide_headers, &h);
	return NGX_CONF_OK;
}

static ngx_http_module_t ngx_http_hello_ctx = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ngx_http_hello_create_loc,
	ngx_http_hello_merge_loc
};

ngx_module_t ngx_http_hello_module = {
	NGX_MODULE_V1,
	&ngx_http_hello_ctx,
	ngx_http_hello_cmd,
	NGX_HTTP_MODULE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NGX_MODULE_V1_PADDING
};
