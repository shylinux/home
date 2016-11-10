--[[ --]] --
[[]] "" '' \
nil true false

number string boolean 
table function thread 
userdata 

() [] {} . :--{{{
_ , = , ...
^
# - not
* / % + - ..
~= == <= >= < >
and or
--}}}
; do end function end--{{{
if exp then cmd else cmd end
for i = b, e, s do cmd end
for k, v in pairs() do cmd end
for i, v in ipairs() do cmd end
while exp do cmd end
repeat cmd until exp
local break return
--}}}
--
_G _VERSION --{{{
require() collectgarbage()
assert() error() print()
type() tonumber() tostring()
select() unpack() next()
getmetatable() setmetatable()
rawget() rawset() rawequal()
dofile() loadfile() loadstring() load()
pcall() xpcall() getfenv() setfenv()

module()
--}}}
io.stdin --{{{
io.stdout
io.stderr
io.input()
io.output()
io.read()
io.write()
io.lines()
io.tmpfile()
io.popen()
io.open()
io.flush()
io.close()
io.type()
--}}}
os.clock() --{{{
os.difftime()
os.date()
os.setlocale()

os.time()
os.getenv()
os.execute()
os.exit()

os.remove()
os.rename()
os.tmpname()
--}}}
math.acos() --{{{
math.asin()
math.atan()
math.atan2()
math.sin()
math.cos()
math.tan()
math.cosh()
math.sinh()
math.tanh()
math.deg()
math.rad()
math.pi

math.exp()
math.log()
math.log10()
math.pow()
math.sqrt()
math.frexp()
math.ldexp()

math.abs()
math.ceil()
math.floor()
math.fmod()
math.modf()
math.huge()
math.max()
math.min()

math.randomseed()
math.random()
--}}}
string.byte()--{{{
string.char()
string.dump()
string.format()

string.find()
string.gsub()
string.match()
string.gmatch()

string.reverse()
string.lower()
string.upper()
string.len()
string.rep()
string.sub()
--}}}
table.maxn()--{{{
table.sort()
table.concat()
table.insert()
table.remove()
--}}}
coroutine.wrap() --{{{
coroutine.create()
coroutine.resume()
coroutine.yield()
coroutine.status()
coroutine.running()
--}}}
package.loaded[] --{{{
package.loaders[]
package.preload[]
package.path
package.cpath
package.seeall()
package.loadlib()
--}}}
debug.debug()--{{{
debug.traceback()
debug.gethook()
debug.sethook()
debug.getinfo()
debug.getfenv()
debug.setfenv()
debug.getupvalue()
debug.setupvalue()
debug.getlocal()
debug.setlocal()
debug.getmetatable()
debug.setmetatable()
debug.getregistry()
--}}}


#include <lauxlib.h>--{{{
luaL_newstate()
luaL_loadstring()
luaL_loadbuffer()
luaL_loadfile()
luaL_dofile()
--}}}
#include <lualib.h>--{{{
luaopen_base()
luaopen_table()
luaopen_math()
luaopen_string()
luaopen_io()
luaopen_os()
luaopen_package()
luaopen_debug()
luaL_openlibs()
--}}}
#include <lua.h>--{{{
lua_State
lua_Alloc
lua_Reader
lua_Writer
lua_CFunction

lua_pushnil()
lua_pushvalue()
lua_pushnumber()
lua_pushstring()
lua_pushboolean()
lua_pushinteger()
lua_pushlstring()
lua_pushfstring()
lua_pushvfstring()
lua_pushcclosure()
lua_pushcfunction()
lua_pushlightuserdata()
lua_pushthread()

LUA_GLOBALSINDEX
lua_getglobal()
lua_setglobal()
lua_getfield()
lua_setfield()
lua_gettable()
lua_settable()
lua_newtable()
lua_createtable()
lua_newuserdata()
lua_getmetatable()
lua_setmetatable()
lua_rawget()
lua_rawset()
lua_rawgeti()
lua_rawseti()
lua_next()
lua_objlen()

lua_load()
lua_dump()
lua_call()
lua_pcall()
lua_cpcall()
lua_getfenv()
lua_setfenv()

lua_type()
lua_typename()
lua_isnumber()
lua_isstring()
lua_isboolean()
lua_isfunction()
lua_iscfunction()
lua_isuserdata()
lua_islightuserdata()
lua_isnil()
lua_istable()
lua_isthread()
lua_tonumber()
lua_tointeger()
lua_tolstring()
lua_toboolean()
lua_tocfunction()
lua_tothread()
lua_topointer()
lua_touserdata()
lua_equal()
lua_rawequal()
lua_lessthan()

lua_pop()
lua_gettop()
lua_settop()
lua_remove()
lua_insert()
lua_replace()
lua_concat()
lua_checkstack()
lua_gc()

lua_newstate()
lua_newthread()
lua_status()
lua_resume()
lua_yield()
lua_error()
lus_close()
lua_xmove()
lua_atpanic()
lua_getallocf()
lua_setallocf()
--}}}
--
git clone https://github.com/simpl/ngx_devel_kit
git clone https://github.com/chaoslawful/lua-nginx-module

lua/*{{{*/
ngx_http_lua_util.c/ngx_http_lua_util.h/*{{{*/
/*}}}*/
ngx_http_lua_api.c/api/ngx_http_lua_api.h/*{{{*/
	ngx_http_lua_get_global_state()
	ngx_http_lua_get_request()
	ngx_http_lua_add_package_preload()
/*}}}*/
ngx_http_lua_cache.c/ngx_http_lua_cache.h/*{{{*/
	ngx_http_lua_cache_loadfile()
	ngx_http_lua_cache_loadbuffer()
/*}}}*/
ngx_http_lua_clfactory.c/ngx_http_lua_clfactory.h/*{{{*/
	ngx_http_lua_clfactory_loadfile()
	ngx_http_lua_clfactory_loadstring()
	ngx_http_lua_clfactory_loadbuffer()
/*}}}*/
ngx_http_lua_ctx.c/ngx_http_lua_ctx.h/*{{{*/
	ngx_http_lua_ngx_get_ctx()
	ngx_http_lua_ngx_set_ctx()
	ngx_http_lua_ngx_set_ctx_helper()
/*}}}*/
ngx_http_lua_exception.c/ngx_http_lua_exception.h/*{{{*/
	ngx_http_lua_atpanic()
/*}}}*/
ngx_http_lua_headers_in.c/ngx_http_lua_headers_in.h/*{{{*/
	ngx_http_lua_set_input_header()
/*}}}*/
ngx_http_lua_headers_out.c/ngx_http_lua_headers_out.h/*{{{*/
	ngx_http_lua_set_output_header()
	ngx_http_lua_get_output_header()
/*}}}*/
ngx_http_lua_initby.c/ngx_http_lua_initby.h/*{{{*/
	ngx_http_lua_init_by_inline()
	ngx_http_lua_init_by_file()
/*}}}*/
ngx_http_lua_pcrefix.c/ngx_http_lua_pcrefix.h/*{{{*/
	ngx_http_lua_pcre_malloc_init()
	ngx_http_lua_pcre_malloc_done()
/*}}}*/
ngx_http_lua_probe.h/*{{{*/
/*}}}*/
ngx_http_lua_script.c/ngx_http_lua_script.h/*{{{*/
	ngx_http_lua_compile_complex_value()
	ngx_http_lua_complex_value()
/*}}}*/
ngx_http_lua_setby.c/ngx_http_lua_setby.h/*{{{*/
	ngx_http_lua_set_by_chunk()
	ngx_http_lua_setby_param_get()
/*}}}*/

lua/module/*{{{*/
ngx_http_lua_appcache_module.c/*{{{*/
	ngx_http_lua_appcache_module:ngx_module_t
/*}}}*/
ngx_http_lua_util_module.c/*{{{*/
	ngx_http_lua_util_ctx:ngx_http_module_t
/*}}}*/
/*}}}*/
ngx_http_lua_ndk.c/ngx_http_lua_ndk.h/*{{{*/
	ngx_http_lua_inject_ndk_api()
/*}}}*/
ngx_http_lua_args.c/ngx_http_lua_args.h/*{{{*/
	ngx_http_lua_inject_req_args_api()
	ngx_http_lua_parse_args()/*}}}*/
ngx_http_lua_consts.c/ngx_http_lua_consts.h/*{{{*/
	ngx_http_lua_inject_core_consts()
	ngx_http_lua_inject_http_consts()
/*}}}*/
ngx_http_lua_control.c/ngx_http_lua_control.h/*{{{*/
	ngx_http_lua_inject_control_api()
/*}}}*/
ngx_http_lua_coroutine.c/ngx_http_lua_coroutine.h/*{{{*/
	ngx_http_lua_inject_coroutine_api()
	ngx_http_lua_coroutine_create_helper()
/*}}}*/
ngx_http_lua_headers.c/ngx_http_lua_headers.h/*{{{*/
	ngx_http_lua_inject_resp_header_api()
	ngx_http_lua_inject_req_header_api()
/*}}}*/
ngx_http_lua_log.c/ngx_http_lua_log.h/*{{{*/
	ngx_http_lua_inject_log_api()
/*}}}*/
ngx_http_lua_misc.c/ngx_http_lua_misc.h/*{{{*/
	ngx_http_lua_inject_misc_api()
/*}}}*/
ngx_http_lua_output.c/ngx_http_lua_output.h/*{{{*/
	ngx_http_lua_inject_output_api()
	ngx_http_lua_calc_strlen_in_table()
	ngx_http_lua_copy_str_in_table()
	ngx_http_lua_flush_resume_helper()
/*}}}*/
ngx_http_lua_phase.c/ngx_http_lua_phase.h/*{{{*/
	ngx_http_lua_inject_phase_api()
	/*}}}*/
ngx_http_lua_regex.c/ngx_http_lua_regex.h/*{{{*/
	ngx_http_lua_inject_regex_api()
/*}}}*/
ngx_http_lua_req_body.c/ngx_http_lua_req_body.h/*{{{*/
	ngx_http_lua_inject_req_body_api()
/*}}}*/
ngx_http_lua_req_method.c/ngx_http_lua_req_method.h/*{{{*/
	ngx_http_lua_inject_req_method_api()
/*}}}*/
ngx_http_lua_sleep.c/ngx_http_lua_sleep.h/*{{{*/
	ngx_http_lua_inject_sleep_api()
/*}}}*/
ngx_http_lua_socket_tcp.c/ngx_http_lua_socket_tcp.h/*{{{*/
	ngx_http_lua_inject_socket_tcp_api()
	ngx_http_lua_inject_req_socket_api()
/*}}}*/
ngx_http_lua_socket_udp.c/ngx_http_lua_socket_udp.h/*{{{*/
	ngx_http_lua_inject_socket_udp_api()
/*}}}*/
ngx_http_lua_string.c/ngx_http_lua_string.h/*{{{*/
	ngx_http_lua_inject_string_api()
/*}}}*/
ngx_http_lua_subrequest.c/ngx_http_lua_subrequest.h/*{{{*/
	ngx_http_lua_inject_subrequest_api()
/*}}}*/
ngx_http_lua_time.c/ngx_http_lua_time.h/*{{{*/
	ngx_http_lua_inject_time_api()
/*}}}*/
ngx_http_lua_uri.c/ngx_http_lua_uri.h/*{{{*/
	ngx_http_lua_inject_req_uri_api()
/*}}}*/
ngx_http_lua_uthread.c/ngx_http_lua_uthread.h/*{{{*/
	ngx_http_lua_inject_uthread_api()
/*}}}*/
ngx_http_lua_variable.c/ngx_http_lua_variable.h/*{{{*/
	ngx_http_lua_inject_variable_api()
/*}}}*/

ngx_http_lua_rewriteby.c/ngx_http_lua_rewriteby.h/*{{{*/
	ngx_http_lua_rewrite_handler()
	ngx_http_lua_rewrite_handler_inline()
	ngx_http_lua_rewrite_handler_file()
/*}}}*/
ngx_http_lua_accessby.c/ngx_http_lua_accessby.h/*{{{*/
	ngx_http_lua_access_handler()
	ngx_http_lua_access_handler_inline()
	ngx_http_lua_access_handler_file()
	ngx_http_lua_access_by_chunk()
/*}}}*/
ngx_http_lua_contentby.c/ngx_http_lua_contentby.h/*{{{*/
	ngx_http_lua_content_by_chunk()
	ngx_http_lua_content_wev_handler()
	ngx_http_lua_content_handler_file()
	ngx_http_lua_content_handler_inline()
	ngx_http_lua_content_handler()
/*}}}*/
ngx_http_lua_headerfilterby.c/ngx_http_lua_headerfilterby.h/*{{{*/
	ngx_http_lua_header_filter_init()
	ngx_http_lua_header_filter_by_chunk()
	ngx_http_lua_header_filter_inline()
	ngx_http_lua_header_filter_file()
	/*}}}*/
ngx_http_lua_bodyfilterby.c/ngx_http_lua_bodyfilterby.h/*{{{*/
	ngx_http_lua_body_filter_init()
	ngx_http_lua_body_filter_by_chunk()
	ngx_http_lua_body_filter_inline()
	ngx_http_lua_body_filter_file()
	ngx_http_lua_body_filter_param_get()
	ngx_http_lua_body_filter_param_set()
/*}}}*/
ngx_http_lua_capturefilter.c/ngx_http_lua_capturefilter.h/*{{{*/
	ngx_http_lua_capture_filter_init()
/*}}}*/
ngx_http_lua_logby.c/ngx_http_lua_logby.h/*{{{*/
	ngx_http_lua_log_handler()
	ngx_http_lua_log_handler_inline()
	ngx_http_lua_log_handler_file()
	ngx_http_lua_inject_logby_ngx_api()
/*}}}*/

ngx_http_lua_conf.c/ngx_http_lua_conf.h/*{{{*/
	ngx_http_lua_create_main_conf()
	ngx_http_lua_init_main_conf()
	ngx_http_lua_create_loc_conf()
	ngx_http_lua_merge_loc_conf()
	ngx_http_lua_init_vm()
/*}}}*/
ngx_http_lua_module.c/ngx_http_lua_common.h/*{{{*/
	ngx_http_lua_module:ngx_module_t
/*}}}*/
ngx_http_lua_directive.c/ngx_http_lua_directive.h/*{{{*/
	ngx_http_lua_shared_dict()
	ngx_http_lua_package_cpath()
	ngx_http_lua_package_path()
	ngx_http_lua_content_by_lua()
	ngx_http_lua_rewrite_by_lua()
	ngx_http_lua_access_by_lua()
	ngx_http_lua_log_by_lua()
	ngx_http_lua_header_filter_by_lua()
	ngx_http_lua_body_filter_by_lua()
	ngx_http_lua_init_by_lua()
	ngx_http_lua_code_cache()
	ngx_http_lua_set_by_lua()
	ngx_http_lua_set_by_lua_file()
	ngx_http_lua_filter_set_by_lua_inline()
	ngx_http_lua_filter_set_by_lua_file()
	ngx_http_lua_rewrite_no_postpone()
/*}}}*/
ngx_http_lua_shdict.c/ngx_http_lua_shdict.h/*{{{*/
	ngx_http_lua_shdict_init_zone()
	ngx_http_lua_shdict_rbtree_insert_value()
	ngx_http_lua_inject_shdict_api()
/*}}}*/

/*}}}*/
ngx.arg[]--{{{
ngx.var[]
ngx.ctx[]
ngx.shared[]
ngx.req.start_time()
ngx.req.raw_header()
ngx.req.get_method()
ngx.req.set_uri()
ngx.req.set_uri_args()
ngx.req.get_uri_args()
ngx.req.get_headers()
ngx.req.set_header()
ngx.req.clear_header()
ngx.req.discard_body()
ngx.req.read_body()
ngx.req.get_post_args()
ngx.exec()
ngx.redirect()
ngx.now()
ngx.time()
ngx.status
ngx.header
ngx.headers_sent
ngx.send_headers()
ngx.print()
ngx.say()
ngx.eof()
ngx.log()
ngx.flush()
ngx.exit()

ngx.encode_base64()
ngx.decode_base64()
ngx.md5()
ngx.
ngx.today()
ngx.re.match()
ngx.re.gmatch()
ngx.re.sub()
ngx.re.gsub()

ngx.OK
ngx.ERROR
ngx.AGAIN
ngx.DONE
ngx.DECLINED

ngx.HTTP_GET
ngx.HTTP_PSOT

ngx.HTTP_OK
ngx.HTTP_NOT_FOUND
ngx.HTTP_INTERNAL_SERVER_ERROR

ngx.DEBUG
ngx.ERR
--}}}
ngx.get_uri_args()--{{{
ngx.set_uri_args()
ngx.get_post_args()

ngx.OK
ngx.AGAIN
ngx.DONE
ngx.DECLINED
ngx.ERROR
ngx.null
ngx.HTTP_GET
ngx.HTTP_POST
ngx.HTTP_OK
ngx.HTTP_MOVED_PERMANENTLY
ngx.HTTP_MOVED_TEMPORARILY

ngx.exec()
ngx.exit()
ngx.redirect()
ngx.throw_error()
ngx.on_abort()

ngx.http_version()
ngx.raw_header()
ngx.clear_header()
ngx.set_header()
ngx.get_headers()
ngx.header[]
ngx.log()
ngx.print()

ngx.send_headers()
ngx.print()
ngx.say()
ngx.flush()
ngx.eof()

ngx.get_phase()
ngx.match()
ngx.gmatch()
ngx.sub()
ngx.gsub()
ngx.re()

ngx.req.read_body()
ngx.req.discard_body()
ngx.req.get_body_data()
ngx.req.get_body_file()
ngx.req.set_body_data()
ngx.req.set_body_file()
ngx.req.init_body()
ngx.req.append_body()
ngx.req.finish_body()
ngx.req.get_method()
ngx.req.set_method()
ngx.sleep()
ngx.var[]
--}}}
