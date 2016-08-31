#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

static ngx_int_t ngx_http_hello_handler(ngx_http_request_t *r)
{
	r->headers_out.status = NGX_HTTP_OK;
	ngx_http_send_header(r);

	ngx_buf_t *b = ngx_create_temp_buf(r->pool, 1024);
	b->last_buf = 1;
	b->last = ngx_sprintf(b->pos, "hello nginx\n");

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
	}
};

static ngx_http_module_t ngx_http_hello_module_ctx = {
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
	&ngx_http_hello_module_ctx,
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
