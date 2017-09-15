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
wechat//{{{
app.wxss
app.json//{{{
{
	"pages":["pages/index/index"],
	"window":{},
	"tabBar":{},
	"network":{},
	"debug":true,
}
//}}}
app.js//{{{
	App({onLaunch({path,query,scene,shareTicket,referrerInfo}),onShow({}),onHide,onError})
	getApp()

	wx.getSystemInfo()
	wx.getSystemInfoSync()
//}}}
pages/index/index.wxml//{{{
	<scroll-view></scroll-view>
	<swiper> <swiper-item> </swiper-item> </swiper>
	<movable-area> <movable-view> <movable-view> </movable-area>
	<icon/>
	<text></text>
	<progress/>
	<button></button>
	<checkbox/>
	<radio/>
	<slider/>
	<switch/>
	<textarea>
	<navigator> </navigator>
	<picker> </picker>
	<picker-view> </picker-view>
	<form> </form>
	<input/>
	<label> </label>

	<audio> </audio>
	<image> </image>
	<video> </video>
	<map> </map>
	<canvas></canvas>

	<view hover-class="" hover-start-time="" hover-stay-time=""></view>

	<view bindtap=""></view>
	<view catchtap=""></view>

	<view wx:for="{{}}" wx:for-index="" wx:for-item="" wx:key="*this">{{}}</view>

	<view wx:if="{{}}">{{}}</view>
	<view wx:elif="{{}}">{{}}</view>
	<view wx:else="{{}}">{{}}</view>

	<block></block>

	<template name=""></template>
	<template is="" data="{{...}}"></template>
	<import src="">
	<include src="">
//}}}
pages/index/index.wxss//{{{
{
	flex-direction:row;
	flex-direction:column;
}//}}}
pages/index/index.json//{{{
{
	"navigationBarTitleText":""
}
//}}}
pages/index/index.js//{{{
	Page({data,viewTap({}),onLoad(),onShow(),onReady,onHide,onUnload,onPullDownRefresh,onReachBottom,onShareAppMessage({from,target}){title,path,success({errMsg,shareTickets}),fail({errMsg}),complete},route})
	getCurrentPages().setData()

	wx.navigateTo({url,success,fail,complete})
	wx.redirectTo({url,success,fail,complete})
	wx.navigateBack({delta})
	wx.switchTab({url,success,fail,complete})
	wx.reLaunch({url,success,fail,complete})

	wx.request({url,data,header,method,dataType,success({data,statusCode,header}),fail,complete})
	wx.uploadFile({url,filePath,name,header,formData,success({data,statusCode}),fail,complete})
	wx.downloadFile({url,header,success({tempFilePath}),fail,complete})
	wx.connectSocket({url,data,header,method,success,fail,complete})
	wx.onSocketOpen(function(){})
	wx.onSocketError(function(){})
	wx.sendSocketMessage({data,success,fail,complete})
	wx.onSocketMessage(({data}))
	wx.closeSocket()
	wx.onSocketClose()

	wx.chooseImage({count,sizeType,sourceType,success({tempFilePaths,tempFiles}),fail,complete})
	wx.previewImage({count,urls,success({tempFilePaths,tempFiles}),fail,complete})
	wx.getImageInfo({src,success({width,height,path}),fail,complete})
	wx.saveImageToPhotoAlbum({filePath,success({errMsg}),fail,complete})

	wx.startRecord({success({tempFilePath}),fail,complete})
	wx.stopRecord()
	wx.playVoice({filePath,success,fail,complete})
	wx.stopVoice()
	wx.pauseVoice()

	wx.saveFile({tempFilePath,success({savedFilePath}),fail,complete})
	wx.getSavedFileList({success({errMsg,fileList:[{filePath,createTime,size}]}),fail,complete})
	wx.getSavedFileInfo({filePath,success({filePath,createTime,size}),fail,complete})
	wx.removeSavedFileInfo({filePath,success,fail,complete})
	wx.openDocument({filePath,success,fail,complete})

	wx.setStorage({key,data,success,fail,complete})
	wx.setStorageSync({key,data})
	wx.getStorage({key,success({data}),fail,complete})
	wx.getStorageSync({key})
	wx.getStorageInfo({success({keys,currentSize,limitSize}),fail,complete})
	wx.getStorageInfoSync()
	wx.removeStorage({key,success({data}),fail,complete})
	wx.removeStorageSync({key})
	wx.clearStorage()
	wx.clearStorageSync()

	wx.getLocation({type,success({latitude,longitude,speed,accuracy,altitude,verticalAccuracy,horizontalAccuracy}),fail,complete})
	wx.chooseLocation({success({name,address,latitude,longitude}),cancelfail,complete})
	wx.openLocation({latitude,longitude,scale,name,address,success,cancelfail,complete})

	wx.getSystemInfo({success({model,pixelRadio,screenWidth,screenHeight,windowWidth,windowHeight,language,version,system,platform,SDKVersion}),fail,complete})
	wx.getSystemInfoSync()
	wx.canIUse()
	wx.getNetworkType({success({networkType}),fail,complete})
	wx.onNetworkStatusChange(function({isConnected,networkType}))
	wx.startAccelerometer({success,fail,complete})
	wx.onAccelerometerChange(function({x,y,z}))
	wx.stopAccelerometer({success,fail,complete})
	wx.startCompass({success,fail,complete})
	wx.onCompassChange(function({direction}))
	wx.stopCompass({success,fail,complete})
	wx.makePhoneCall({phoneNumber,success,fail,complete})
	wx.scanCode({onlyFromCamera,success({result,scanType,charSet,path}),fail,complete})
	wx.setClipboardData({data,success,fail,complete})
	wx.getClipboardData({success({data}),fail,complete})
	wx.setScreenBrightness({value,success,fail,complete})
	wx.getScreenBrightness({success({value}),fail,complete})
	wx.vibrateLong({success,fail,complete})
	wx.vibrateShort({success,fail,complete})
	wx.addPhoneContact({photoFilePath,nickName,lastName,MiddleName,firstName,remark,mobilePhoneNumber,wechatNumber,success({errMsg}),fail({errMsg}),complete})

	wx.showToast({title,icon,image,duration,mask,success,fail,complete})
	wx.showLoading({title,mask,success,fail,complete})
	wx.hideToast()
	wx.hideLoading()
	wx.showModal({title,content,showCancel,cancelText,cancelColor,confirmText,confirmColor,success({confirm,cancel}),fail,complete})
	wx.showActionSheet({itemList,itemColor,success({tapIndex}),fail,complete})
	wx.setNavigationBarTitle({title,success,fail,complete})
	wx.showNavigationBarLoading()
	wx.hideNavigationBarLoading()

	wx.createAnimation({duration,timingFunction,delay,transformOrigin}).rotate().scale().translate().skew().matrix().step().export()
	wx.createCanvasContext()
	wx.canvasToTempFilePath()

	wx.checkSession({success,fail,complete})
	wx.login({success({errMsg,code}),fail,complete})
	file_get_content("https://api.weixin.qq.com/sns/jscode2session?appid=&secret=&js_code=&grant_type=authorization_code")
	{openid,session_key,expires_in}
	wx.authorize()
	wx.openSetting()
	wx.getSetting()
	wx.getUserInfo({withCredenttials,success({userInfo:{nickName,avatarUrl,gender,province,city,county},rawData,signature,encryptedData,iv}),fail,complete})

	wx.showShareMenu({withShareTicket,success,fail,complete})
	wx.updateShareMenu({withShareTicket,success,fail,complete})
	wx.hideShareMenu({success,fail,complete})
	wx.getShareInfo({ShareTicket,success({errMsg,encryptedData,iv}),fail,complete})
	wx.chooseAddress({success({errMsg,userName,postalCode,provinceName,cityName,countyName,detailInfo,nationalCode,telNumber}),fail,complete})
	wx.addCard()
	wx.openCard()
	wx.getWeRunData()
	wx.navigateToMiniProgram()
	wx.navigateBackMiniProgram()
//}}}
utils/utils.js//{{{
	module.exports
	require("")
//}}}
//}}}
jQuery//{{{

$.cookie()

$(",")

$(">")
$(" ")
$("+")
$("~")

$("#")
$("div")
$(".")
$(":not")
$(":has")
$(":contains")
$(":lang")
$(":target")
$(":root")
$(":empty")
$(":parent")
$(":header")

$(":focus")
$(":input")
$(":button")
$(":enabled")
$(":disabled")
$(":checked")
$(":selected")

$(":text")

$(":first")
$(":last")
$(":lt")
$(":gt")
$(":eq")
$(":odd")
$(":even")
$(":nth-child")

$("[]")
$("[=]")
$("[!=]")
$("[^=]")
$("[$=]")
$("[*=]")
$("[|=]")
$("[~=]")

$().filter().find().not().is()
.parent().next().prev().children()
.end()

$(function(){}).ready()
$().on("", function(){}).off().one().trigger()
.load().focus().blur().click().hover()
event target stopPropagation() preventDefault() return false;
$().addClass().removeClass().toggleClass().hasClass()
$().css().show().hide().toggle()
	.fadeIn().fadeOut().fadeToggle()
	.slideDown().slideUp().slideToggle()
	.animate()
$().text()
//}}}
nodejs//{{{
//}}}

HTML
<!DOCTYPE html>
<html lang="zh-CN">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width">
	<title>hello HTML world</title>
	<link rel="stylesheet" href="" type="text/css">
</head>
<body>
	<h1></h1> <h2></h2> <h3></h3> <h4></h4> <h5></h5> <h6></h6>
	<p></p>
	<em></em> <strong></strong>
	<i></i><b></b><u></u>
	<sub></sub> <sup></sup>
	<a href="mailto:shylinux@163.com?cc=&bcc=&subject=&body=" title="" download=""></a>
	<img src="" alt="" width="" height="">

	&lt; &gt; &amp; &quot; &apos;
	<!-- -->

	<ul><li></li></ul>
	<ol><li></li></ol>
	<dl><dt></dt><dd></dd></dl>

	<q cite=""></q>
	<blockquote cite=""></blockquote>
	<abbr title=""></abbr>
	<address></address>

	<code></code>
	<pre></pre>
	<var></var>
	<kbd></kbd>
	<samp></samp>
	<time datetime="2017-09-15T19:30+08:00"></time>

	<header></header>
	<nav></nav>
	<main></main>
	<aside></aside>
	<footer></footer>

	<article></article>
	<section></section>

	<div></div>
	<span></span>

	<br><hr>
	<video src="" controls width="" height="" muted></video>
	<audio controls>
		<source src="" type="">
		<source src="" type="">
		<track kind="subtitles" src=".vtt" srclang="en">
		WEBVTT

		1
		00:00:22.230 --> 00:00:24.606
		hello

		2
		00:00:22.230 --> 00:00:24.606
		hello


	</audio>
	<figure><img><figcaption></figcaption></figure>

	<iframe src="" width="" height="" frameborder="" allowfullscreen sandbox></iframe>
	<form>
		<input type="text" disabled>
		<input type="search" name="q" placeholder="">
		<input type="submit" value="GO">
	</form>

	<script src=""></script>
</body>
</html>

CSS
#id div.wrap:first[href], a {
	width: 600px;
	margin: 0 auto;
	border: 5px solid black;
	padding: 0;

	display: block;
	background-color: #00539F;
	color: red;

	font-size: 10px;
	font-family: placeholder;
	letter-spacing: 1px;
	line-height: 2;
	text-align: center;
	text-shadow: 3px 3px 1px black;
}
/**/

JavaScript
Number String Boolean
Array Object Function
/**/
var
function

window
jQuery
$(document).ready(function(){})
$().click(function(event){})
$().addClass()
$().removeClass()
$().hide()
$().show()
$.get(url,function(){})

$("#id tag.class:pso[name=value], union").length
$().has().not().find().filter().first().eq().end()
$().each()
$().map()
$().match()

$().parent()
$().parents()
$().parentUntil()
$().closest()
$().children()
$().find()
$().siblings()
$().prev()
$().prevAll()
$().prevUntil()
$().next()
$().nextAll()
$().nextUntil()

$().attr()
$().html()
$().text()
$().width()
$().height()
$().position()

$().data()

$().empty()
$().remove()
$().detach()
$().clone()
$().after()
$().before()
$().append()
$().prepend()
$().appendTo()
$().prependTo()
$().insertAfter()
$().insertBefore()

$().css()
$().hasClass()
$().addClass()
$().removeClass()
$().toggleClass()

$.trim()
$.each()
$.extend()
$.proxy()
$.type()
$.isArray()
$.isFunction()

$().on()
$().off()
$().one()
$().ready()
$().click()
$().hover()
$().trigger()

$().hide()
$().show()
$().toggle()
$().slideUp()
$().slideDown()
$().slideToggle()
$().fadeOut()
$().fadeIn()
$().fadeToggle()
$().stop()
$().delay()
$().animate()
$().queue()
$().dequeue()

$.ajax({method,url,data,headers,dataType}).done().fail().always()
$.get()
$.getScript()
$.getJSON()
$.post()
$.ajaxPrefilter()
$().ajaxStart()
$().ajaxStop()

$().load()
$().submit()
$().serialize()
$().serializeArray()
$().val()

event
	type
	data
	which
	target
	namespace
	timeStamp
	pageX pageY
	preventDefault()
	stopPropagation()
wechat
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
2006  IE7		   jQuery
2007               HTML5    iOS
2008               Chrome   Android
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
