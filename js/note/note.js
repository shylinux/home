/* */ //
undefined null//{{{
Number String Boolean
Array Object Function
RegExp Date Math JSON
Infinity NaN "" '' true false
[,] {:,} function() {}
[] . ()
/ /gi
//}}}
++ --//{{{
+ -
~ & | ^ << >> >>>
! && ||
* / % + -
< <= > >= != == !== ===
?:
=
isNaN()
isFinite()
parseInt()
parseFloat()
encodeURI()
decodeURI()
encodeURIComponent()
decodeURIComponent()
new
delete
typeof
instanceof
//}}}
; {}//{{{
for (;;) {}
for (in) {}
while () {}
do {} while ();
if () {} else {}
switch () {case: default:}
break continue label:
with () {}
try{}catch(){}finally{}

var function() {return}
arguments this
	callee
	caller
	length
//}}}

Number//{{{
	EPSILON NaN
	MAX_VALUE MAX_SAFE_INTEGER
	MIN_VALUE MIN_SAFE_INTEGER
	NEGATIVE_INFINITY
	POSITIVE_INFINITY
	isNaN() isFinite()
	isInteger() isSafeInteger()
	parseInt() parseFloat()
	//}}}
number//{{{
	toFixed()
	toPrecision()
	toExponential()
//}}}
String//{{{
	fromCharCode()
//}}}
string//{{{
	length concat() trim()
	charAt() charCodeAt()
	indexOf() lastIndexOf()
	toUpperCase() toLowerCase()
	slice() substr() substring()
	search() match() replace() split()
	anchor() link()
	big() small()
	bold() italics()
	sub() sup()
//}}}
Boolean//{{{
//}}}
boolean//{{{
//}}}
Array//{{{
	isArray()
//}}}
array//{{{
	length
	join()
	push() pop()
	shift() unshift()
	reverse() sort()
	concat() slice()
	splice()
	indexOf() lastIndexOf()
	every() some()
	map() filter()
	forEach()
	reduce() reduceRight()
//}}}
Object//{{{
	defineProperty()
	defineProperties()
	getOwnPropertyNames()
	getOwnPropertySymbols()
	getOwnPropertyDescriptor()
	getPrototypeOf() setPrototypeOf()
	freeze() seal() preventExtensions()
	isFrozen() isSealed() isExtensible()
//}}}
object//{{{
	constructor isPrototypeOf()
	hasOwnPorperty() propertyIsEnumrable()
	toLocaleString() toString() valueOf()
//}}}
Function//{{{
//}}}
function//{{{
	name length arguments caller
	apply() call() bind()
	prototype
//}}}
RegExp//{{{
//}}}
regexp//{{{
	global ignorecase multiline
	source lastIndex
	test() exec() complie()
//}}}
Date//{{{
	now() parse() UTC()
//}}}
date//{{{
	getFullYear() getMonth() getDate() getDay()
	getHours() getMinutes() getSeconds() getMilliseconds()
	getTime() getTimezoneOffset()
//}}}
Math//{{{
	PI E LN10 LN2 LOG2E LOG10E SQRT1_2 SQRT2
	sin() asin() sinh() asinh()
	cos() acos() cosh() acosh()
	tan() atan() tanh() atanh()
	atan2()
	exp() expm1()
	log() log2() log10() log1p()
	pow() sqrt() cbrt()
	clz32() hypot()
	max() min() imul()
	abs() sign() fround()
	ceil() floor() round() trunc()
	random()
//}}}
JSON//{{{
	parse() stringify()
//}}}
Error//{{{
//}}}

window//{{{
	top parent self
	open() close() opener
	screenLeft(screenX)
	screenTop(screenY)
	moveTo() moveBy()
	innerWidth innerHeight
	outerWidth outerHeight
	resizeTo() resizeBy()
	setTimeout() clearTimeout()
	setInterval() clearInterval()
	alert() confirm() prompt()
	print() find()

	onload onunload
	onabort onerror
	onresize onscroll
	onselect

	location//{{{
		assign() replace() reload()
		href protocol host
		hostname port search hash
//}}}
	history//{{{
		length go() back() forward()
//}}}
	navigator//{{{
		appName appCodeName appVersion
		platform userAgent plugins[]
//}}}
	screen//{{{
		availWidth availHeight colorDepth width height
//}}}
	document//{{{
		URL domain referer
		documentElement title head body
		anchors[] links[] forms[] images[]

		createElement()
		createTextNode()
		createComment()
		createDocumentFragment()
		createAttribute()

		open() close()
		write() writeln()

		readyState
		compatMode
		hasFocus()
		activeElement
		implementation.hasFeature("Core", "1.0");
//}}}
	element//{{{
		id dir title
		tagName className
		classList
			add()
			remove()
			toggle()
			contains()
		dataset
		innerHTML outerHTML insertAdjacentHTML()
		attributes
			getNamedItem()
			removeNamedItem()
			setNamedItem()
			item()
		getAttribute()
		setAttribute()
		removeAttribute()

		setAttributeNode()
		getAttributeNode()

		getElementById()
		getElementByName()
		getElementsByTagName()
		getElementsByClassName()

		querySelector()
		querySelectorAll()

		children contains()
		childElementCount
		firstElementChild
		lastElementChild
		previousElementSibling
		nextElementSibling

		focus()
		scrollIntoView()

		addEventListener()/attachEvent()
		removeEventListener()/detachEvent()
		onclick
		onblur onfocus onfocusin onfocusout
		onmouseover
		onmousemove
		onmouseout
		onmousedown
		onmouseup
		onclick
		ondbclick
		onmouseenter
		onmouseleave
		onmousewheel

		onkeydown
		onkeypress
		onkeyup
		ontouchstart
		ontouchmove
		ontouchend

		canvas
			toDataURL()
			getContext()
				createLinearGradient().addColorStop()
				createRadialGradient().addColorStop()
				createPattern()

				strokeStyle fillStyle lineWidth lineCap lineJoin
				shadowColor shadowOffsetX shadowOffsetY shadowBlur
				rotate() scale() translate() transform() setTransform()
				save() restore()

				beginPath() closePath() stroke() fill() clip()
	 			moveTo() lineTo() bezieCurveTo() arcTo() arc() rect()

				strokeRect() fillRect() clearRect() 
				strokeText() fillText()
				drawImage() toDataURL()
				getImageData()

			
//}}}
	event//{{{
		bubbles stopPropagation()/cancelBubble
		cancelable preventDefault()/returnValue defaultPrevented
		type target/srcElement currentTarget
		detail eventPhase view
		clientX
		clientY
		pageX
		pageY
		screenX
		screenY
		relatedTarget/toElement/fromElement
		button
		wheelDelta
		shiftKey
		ctrlKey
		altKey
		metaKey
//}}}
	HTMLCollection//{{{
		length [] item() namedItem()
//}}}
	NodeList//{{{
		length [] item()
//}}}
	Node//{{{
		nodeType nodeName nodeValue
		ownerDocument parentNode childNodes[] hasChildNodes()
		firstChild lastChild previousSibling nextSibling
		appendChild() removeChild() replaceChild() insertBefore()
		cloneNode()
//}}}
//}}}
jQuery

global


1990
1991  ARM   Linux  HTTP
1994                        linux 1.0
1995  IE1   win95           linux 1.2
1995  IE2  
1996  IE3                   linux 2.0
1997  IE4  
1998        win98
1999  IE5          HTML4    linux 2.2
2001  IE6   winXP  MacOSX   linux 2.4
2003               Safari   linux 2.6
2004               FireFox
2006  IE7  
2007               HTML5
2008               Chrome
2009  IE8   win7   
2011  IE9          wechat   linux 3.0
2012  IE10  win8   go1.0
2013  IE11  win81
2015        win10           linux 4.0

2007               iOS1
2008  Andorid1.0   iOS2
2009  Andorid1.1   iOS3
2009  Andorid2.0
2009  Andorid2.1
2010  Andorid2.2   iOS4
2011  Andorid3.0   iOS5
2011  Andorid4.0
2012  Ahdorid4.1   iOS6
2012  Ahdorid4.2
2013  Ahdorid4.3   iOS7
2014  Ahdorid5.0   iOS8
2015  Ahdorid6.0   iOS9
2016  Ahdorid7.0   iOS10
