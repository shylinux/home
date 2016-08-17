/* */ // node npm \x \u
undefined null //{{{
Number String Boolean
Array Object Function
RegExp Date Math JSON
Infinity NaN "" '' true false
[,] {:,} function(){}
/ /gi
//}}}
[] . () //{{{
++ -- 
- ~ !
* / %
+ -
+
<< >> >>>
< <= > >=
in instanceof
!= == !== ===
& ^ |
&& ||
?:
=
,
label:
delete typeof new instanceof
eval()
isFinite() isNaN()
parseFloat() parseInt()
encodeURI() decodeURI()
encodeURIComponent() decodeURIComponent()

//}}}
; {}//{{{
for (in) {}
for (;;) {}
while () {}
do {} while ()
if () {} else {}
switch () {case: default: }
break continue return with
this arguments var let
debugger
try {throw} catch(e) {}
//}}}

number//{{{
	toPrecision() toFixed() toExponential()
//}}}
string//{{{
	length
	match() replace() toLowerCase() toUpperCase()
	trim() trimLeft() trimRight() concat() repeat()
	search() indexOf() lastIndexOf() endsWith() startsWith()
	charAt() substr() subString() slice() split()
//}}}
Array//{{{
	isArray()
//}}}
array//{{{
	length indexOf() keys() entries()
	join() sort() fill() reverse()
	push() pop() unshift() shift() splice() slice() concat()
	map() forEach() filter() find() reduce() every() some()
//}}}
Object//{{{
	create() prototype getPropertyOf() setPropertyOf()
	keys() getOwnPropertyNames() getOwnPropertyDescriptor() defineProperty()
	isExtensible() preventExtensions() isSealed() seal() isFrezon() freeze()
//}}}
object//{{{
	hasOwnProperty() propertyIsEnumerable()
	toString() valueOf() constructor isPrototypeOf()
//}}}
function//{{{
	name arguments length
	call() apply() bind()
	arguments[]
		caller callee length
	prototype
//}}}
date//{{{
	getFullYear() getMonth()+1 getDate()
	getHours() getMinutes() getSeconds()
	getDay() getTime() getMilliseconds()
//}}}
regexp//{{{
	compile() source global ignoreCase multiline
	lastIndex test() exec()
//}}}
Math//{{{
	E PI LN2 LN10 LOG10E LOG2E SQRT2 SQRT1_2
	exp() log() log2() log10() log1p() expm1()
	sin() cos() tan() asin() acos() atan() atan2()
	sinh() cosh() tanh() asinh() acosh() atanh()
	abs() sign() trunc() round() floor() ceil()
	random() max() min() pow() sqrt() cbrt()
	fround() imul() clz32() hypot()
//}}}
JSON//{{{
	stringify() parse()
//}}}

screen//{{{
	width height colorDepth
	availWidth availHeight availTop availLeft
//}}}
navigator//{{{
	platform
	userAgent
//}}}
window//{{{
	alert() confirm() prompt() showModalDialog()
	open() close() opener
	setTimeout() setInterval() clearTimeout() clearInterval()
	pageXOffset pageYOffset
	innerWidth innerHeight
	scrollTo() scrollBy()
	localStorage

	on@load
//}}}
history//{{{
	go() back() forward()
//}}}
location//{{{
	href protocol host port hostname pathname search hash
	reload() assign() replace()
//}}}
document//{{{
	scrollTop scrollLeft

	referrer title domain

	createElement() createTextNode() createDocumentFragment() cloneNode()
	getElementById() getElementByTagName() getElementByClassName()
	querySelector() querySelectorAll()
	head body


	nodeType nodeValue nodeName
	style className getAttribute() setAttribute() hasAttribute() removeAttribute()
	innerHTML outerHTML innerText/textContent
	appendChild() insertBefore() removeChild() replaceChild()
//}}}
element//{{{
	on@keydown on@keypress on@keyup
	on@mouseover on@mousemove on@mousedown on@mouseup on@mouseout
	on@click on@dblclick
	on@focus on@change on@select on@blur
	on@touchstart on@touchmove on@touchend
	on@gesturestart on@gesturechange on@gestureend
	on@submit on@reset
	on@resize on@scroll
	addEventListener()
	removeEventListener()

	parentNode childNodes firstChild lastChild nextSibling previousSibling
	children firstElementChild lastElementChild nextElementSibling previousElementSibling
	nodeType nodeValue nodeName

	getBoundingClientRect()
	offsetWidth offsetHeight offsetLeft offsetTop offsetParent
	clientWidth clientHeight clientLeft clientTop
	scrollWidth scrollHeight scrollLeft scrollTop
	onclick

	id
	src style className
	attibutes getAttribute() setAttribute() hasAttribute() removeAttribute()
	addEventListener()/attachEvent()

	innerHTML appendChild() removeChild() replaceChild() insertBefore()

	onclick
	action
	method
//}}}
event//{{{
	defaultPrevented preventDefault()
	stopPropagation() stopImmediatePropagation()
	target
//}}}
style//{{{
	display visibility
//}}}
XMLHttpRequest//{{{
	open() setRequestHeader() send()

	onreadystatechange
	readyState status statusText
	getResponseHeader()
	responseText responseXML
//}}}
canvas//{{{
	getContext("2d")
		beginPath() moveTo() lineTo() closePath()
		fillStyle fill() fillText()
		font
//}}}

jQuery//{{{
	selector context jquery
	length [] size() get() toArray()
	map()

	attr() removeAttr()
	data() removeData()
	css() addClass() removeClass() toggleClass() hasClass()
	val()

	html() text()

	offset()
	offsetParent() position()
	width() height() innerWidth() innerHeight() outerWidth() outerHeight()
	scrollTop() scrollLeft()

	replaceWith() before() after() append() prepend()
	replaceAll() insertBefore() insertAfter() appendTo() prependTo()
	unwrap() wrap() wrapInner() wrapAll()
	clone() empty() remove() detach()

	bind() unbind() one() trigger()
	load() unload()
	click() dbclick()
	focus() blur()
	change() select()
	keydown() keypress() keyup()
	mouseover() mousemove() mousedown() mouseup() mouseout()
	resize() scroll()
	submit()
	hover() mouseenter() mouseleave()

	show() hide() toggle()
	fadeIn() fadeOut() fadeTo()
	slideDown() slideUp() slideToggle()
	animate() delay() stop()

	load() post() get() getScript() getJSON()
	ajax() ajaxSetup() param()
//}}}

global//{{{
	__dirname __filename
	Promise Map Set Symbol
	setTimeout() setInterval()
	clearTimeout() clearInterval()
	require() module exports
	Buffer
	console
		log() info() warn() error()
		dir() trace() assert() time() timeEnd()
	process
		env
		argv
		stdin
			setEncoding() resume() on@data on@end pipe() pause()
		stdout
		stderr
		cwd() chdir()
		exit()
		on@uncaughtException
		on@SIGKILL
		on@exit
//}}}
os child_process cluster
fs tty readline path
net tls dgram http https
crypto zlib dns url querystring
v8 vm assert events util
events//{{{
	on() once() emit()
	addListener() removeListener() removeAllListeners()
	listenerCount listeners() setMaxListeners() getMaxListeners()
//}}}
fs//{{{
	stat()
	readFile()
	watchFile()
	createReadStream()
//}}}
net//{{{
	createServer() Server()
		on@connection on@error
		listen() address() on@listen()
		close() on@close() ref() unref()
		maxConnections connections
	createConnect() connect() Socket()
		connect() address() on@lookup on@connect on@error
		remoteFamily remoteAddress remotePort localAdress localPort
		setEncoding() resume() on@data on@end pause()
		write() on@drain end() bufferSize bytesRead bytesWritten
		setNoDelay() setKeepAlive() setTimeout() on@timeout
		destroy() on@close unref() ref()
//}}}
http//{{{
	createServer() Server()
		on@request on@connection on@clientError
		on@upgrade on@connect on@checkContinue
		listen() close() on@close setTimeout() on@timeout
		unref() ref() listenFD() address()
		getConnections()
		on@request
			req IncomingMessage()
				method url httpVersion
				headers trailers
				on@data on@end
			res ServerResponse()
				statusCode statusMessage setHeader() getHeader() removeHeader()
				writeHead() write() end()
	get() Agent()
		res
			httpVersion statusCode statusMessage
			headers trailers
			setEncoding() on@data on@end

	request({host,port,method,url}) ClientRequest()
		write() end()//}}}
querystring//{{{
	stringify() parse()//}}}
