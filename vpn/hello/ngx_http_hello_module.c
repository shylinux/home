#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

static ngx_int_t ngx_http_hello_handler(ngx_http_request_t *r)
{
	ngx_int_t rc = ngx_http_discard_request_body(r);
	if (rc != NGX_OK) {
		return rc;
	}

	r->headers_out.status = NGX_HTTP_OK;
	rc = ngx_http_send_header(r);
	if (rc == NGX_ERROR || rc > NGX_OK || r->header_only) {
		return rc;
	}

	/*
	ngx_buf_t *b = ngx_create_temp_buf(r->pool, 1024);
	b->last = ngx_snprintf(b->pos, 1024, "hello nginx world!\n");
	*/

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
	ngx_pool_cleanup_file_t *clnf = cln->data;
	cln->handler = ngx_pool_cleanup_file;
	clnf->fd = b->file->fd;
	clnf->name = (u_char*)fn;
	clnf->log = r->pool->log;


	ngx_chain_t c = {.buf = b, .next = NULL};
	return ngx_http_output_filter(r, &c);
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

static ngx_http_module_t ngx_http_hello_ctx = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
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
