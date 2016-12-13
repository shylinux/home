     c
   sh go
  vi py js
ARM Linux HTTP

$GOROOT $GOPATH $GOBIN $GOARCH $GOOS// {{{
help version env run tool
get list doc fmt fix vet
build test install clean
// }}}
help version init// {{{
add commit rm mv checkout
log status grep diff reset
tag branch merge rebase show
clone remote fetch pull push
// }}}
// /* */
package import type var const func
func init() {}
func main() {}
'' "" ``// {{{
nil true false iota
int int8 int16 int32 int64
uint uint8 uint16 uint32 uint64
float32 float64 complex64 complex128
uintptr byte string rune bool error
* [...] ... [] map[] chan
struct{} interface{} func(){}
// }}}
_, := , <-// {{{
{:,:} [:] () . ->
& * + - ! ^
* / % + -
<< >> & | ^
> >= < <= != ==
&& ||
...
complex() real() imag()
new() make() delete() close()
len() cap() append() copy()
print() println()
// }}}
if exp {} else {}// {{{
if exp; exp {} else {}
for {break}
for exp {continue}
for exp; exp; exp {}
for k, v := range l {}
switch {case exp: fallthrough}
switch exp {case exp: default:}
switch t := x.(type) {case int:}
return goto defer recover() panic()
go select {case <-:}
// }}}
os time path flag log runtime sync expvar
io bytes bufio fmt net mime text html image
math sort container hash crypto database index
unicode strings strconv regexp encoding archive compress
go internal syscall unsafe errors testing debug reflect
os// {{{// {{{// {{{
	Getenv() Setenv() Unsetenv() LookupEnv()
	Environ() Clearenv() ExpandEnv() Expand()
	Getwd() Chdir() TempDir() Hostname() Getpagesize()
	Getuid() Geteuid() Getgid() Getegid() Getgroups()
	Getpid() Getppid() Args[] Exit() Stdin Stdout Stderr
	Process{} StartProcess() FindProcess()
		ProcessState{} Wait() Kill() Signal() Release()
			Exited() Success() Pid() String()
			Sys() SysUsage() SystemTime() UserTime()

	ErrInvalid ErrPermission ErrExist ErrNotExist
	SyscallError{} LinkError{} PathError{} NewSyscallError()
	ProcAttr{} Signal{} Interrupt Kill

	O_RDONLY O_WRONLY O_RDWR O_SYNC
	O_APPEND O_TRUNC O_CREATE O_EXCL
	SEEK_SET SEEK_CUR SEEK_END
	PathSeparator PathListSeparator
	DevNull ModeDir

	IsExist() IsNotExist() IsPathSeparator() IsPermission()
	Create() Mkdir() MkdirAll() Remove() RemoveAll()
	Chown() Lchown() Chmod() Chtimes() Truncate()
	Rename() Link() Symlink() Readlink()
	FileInfo{} Stat() Lstat() SameFile()
		Name() Size() ModTime() IsDir()
		Mode() FileMode{}
			IsDir() IsRegular() Perm() String()
	File{} Open() Pipe() NewFile() OpenFile()
		Chown() Chmod() Chdir() Truncate()
		Name() Fd() Stat() Seek() Sync() Close()
		Read() ReadAt() Readdir() Readdirnames()
		Write() WriteAt() WriteString()
// }}}
os/exec// {{{
	LookPath()
	Command() Cmd{}
		Output() CombinedOutput()
		StderrPipe() StdinPipe() StdoutPipe()
		Run() Start() Wait()
// }}}
os/signal// {{{
	Ignore() Reset() Notify() Stop()
// }}}
os/user// {{{
	User{} Current() Lookup() LookupId()
		Uid Gid Username Name HomeDir
// }}}
// }}}
time// {{{
	ANSIC RFC1124 Local UTC ParseError{}
	Month{} January February March April May June July August September October November December
	Weekday{} Sunday Monday Tuesday Wednesday Thursday Friday Saturday
	Duration{} Nanosecond Microsecond Millsecond Second Minute Hour

	Time{} Now() Unix() Date() Parse() ParseInLocation()
		Unix() UnixNano() Date() Clock() String()
		Year() Month() Day() YearDay() Weekday()
		Hour() Minute() Second() Nanosecond()
		Location() In() Zone() Local() UTC()

		Add() AddDate() Sub() Round() Truncate()
		After() Before() Equal() IsZero()
		AppendFormat() Format() ISOWeek()
		GobDecode() GobEncode()
		MarshalBinary() MarshalJSON() MarshalText()
		UnMarshalBinary() UnMarshalJSON() UnMarshalText()
	Duration{} Since() ParseDuration()
		String() Hours() Minutes() Seconds() NanoSeconds()
	Location{} FixedZone() LoadLocation()
	Ticker{} NewTicker()
		Stop()
	Timer{} NewTimer()
		Stop() Reset()
	Sleep() Tick() After() AfterFunc()
// }}}
path// {{{// {{{
	Clean() Base() Dir() Ext()
	IsAbs() Match() Join() Split()
// }}}
path/filepath// {{{
	Walk()
	FromSlash() ToSlash() Rel() HasPrefix()
	VolumeName() Glob() SplitList() EvalSymlinks()
// }}}
// }}}
flag// {{{
	PrintDefaults() Var() NewFlagSet()
	Parse() Parsed() NFlag() NArg() Arg() Args()
	Set() Lookup() UnquoteUsage() Visit() VisitAll()
	String() Bool() Int() Uint() Duration() Int64() Uint64() Float64()
	IntVar() BoolVar() DurationVar() Float64Var() Int64Var() StringVar() UintVar() Uint64Var()
// }}}
log// {{{// {{{
	Print() Println() Printf()
	Fatal() Fatalln() Fatalf()
	Panic() Panicln() Panicf()
	SetOutput() SetPrefix() SetFlags()
	Output() Prefix() Flags()
	New()
// }}}
log/syslog// {{{
	New() NewLogger() Dial()
	// }}}
// }}}
runtime// {{{
	GOROOT() Version() Compiler NumCgoCall()
	GOARCH GOOS NumCPU() NumGoroutine()
	Stack() Caller() Callers() FuncForPC()
	Breakpoint() GC() Gosched() Goexit()
	GOMAXPROCS() LockOSThread() UnLockOSThread()
	MemStats{} ReadMemStats()


	SetBlockProfileRate()
	SetCPUProfileRate()
	CPUProfile()
	MemProfile()
	BlockProfile()
	GoroutineProfile()
	ThreadCreateProfile()
	StartTrace()
	StopTrace()
	ReadTrace()
	SetFinalizer()
	BlockProfileRecord{}
	MemProfileRecord{}
	StackRecord{}

runtime/cgo
runtime/debug
runtime/internal/atomic
runtime/internal/sys
runtime/pprof
runtime/race
runtime/trace
// }}}
sync// {{{
	Mutex{}
		Lock() Unlock()
	RWMutex{}
		Lock() UnLock()
		RLock() RUnlock()

	Once{}
		Do()
	Pool{}
		New Get() Put()

	Cond{} NewCond()
		Wait() Signal() Broadcast()
	WaitGroup{}
		Add() Wait() Done()

sync/atomic
// }}}
expvar// {{{
	NewInt() NewFloat() NewString() NewMap()
	Var{} Publish() Get()
// }}}
// }}}
io// {{{// {{{// {{{
	EOF
	Copy() CopyN() CopyBuffer()
	ReadAtLeast() ReadFull()
	WriteString()
	Pipe()
	LimitReader() MultiReader() TeeReader() NewSectionReader()
	MultiWriter()
// }}}
io/ioutil// {{{
	Discard
	ReadFile() WriteFile()
	ReadDir() ReadAll()
	TempDir() TempFile()
// }}}
// }}}
bytes// {{{
	Buffer{} NewBuffer()
		Bytes() String() Next() UnreadByte() UnreadRune()
		Len() Cap() Grow() Truncate() Reset() ReadFrom() WriteTo()
		Read() ReadByte() ReadBytes() ReadRune() ReadString()
		Write() WriteByte() WriteRune() WriteString()
		
// }}}
bufio// {{{
	ScanBytes() ScanRunes() Scanwords() ScanLines()
	Scanner{} NewScanner()
		Buffer() Split()
		Scan() Err()
		Bytes() Text()
	Reader{} NewReader() NewReaderSize()
		Buffered() Discard() Peek()
		Read() ReadByte() ReadBytes()
		ReadLine() ReadSlice()
		ReadRune() ReadString()
		Reset() WriteTo()
		UnreadByte() UnreadRune()
	Writer{} NewWriter() NewWriterSize()
		Available() Buffered() Flush()
		Write() WriteByte() WriteRune() WriteString()
		ReadFrom() Reset()
	ReadWriter{}NewReadWrtier()

// }}}
fmt// {{{
	Errorf()
	Print() Println() Printf()
	Fprint() Fprintln() Fprintf()
	Sprint() Sprintln() Sprintf()
	Scan() Scanln() Scanf()
	Fscan() Fscanln() Fscanf()
	Sscan() Sscanln() Sscanf()
// }}}
net// {{{// {{{
	Interface{} InterfaceByName() InterfaceByIndex() Interfaces()
		Index MTU Name HardwareAddr HardwareAddr{} ParseMAC()
		Flags Flags{} FlagUp FlagBroadcast FlagLookback FlagPointToPoint FlagMuticast
		Addrs() MulticastAddrs()
	Addr{} InterfaceAddrs()

	LookupHost() LookupAddr() LookupIP() LookupPort()
	SRV{} LookupSRV() LookupTXT() LookupCNAME()
	MX{} LookupMX()
	NS{} LookupNS()

	JoinHostPort() SplitHostPort()
	IPNet{} ParseCIDR()
	IP{} IPv4() ParseIP()
	IPMask{} IPv4Mask() CIDRMask()
	IPv4len IPv4bcast IPv4allsys IPv4allrouter IPv4zero
	IPv6len IPv6zero

	Listener{} Listen() FileListener()
		Accept() Addr() Close()
	Conn{} Dial() DialTimeout() FileConn()
		Read() Write() Close()
		LocalAddr() RemoteAddr()
		SetDeadline() SetReadDeadline() SetWriteDeadline()
	PacketConn{} ListenPacket() FilePacketConn()
	Dialer{}
	Pipe()

	IPAddr{} ResolveIPAddr()
	IPConn{} ListenIP() DialIP()

	TCPAddr{} ResolveTCPAddr()
	TCPListener{} ListenTCP()
		Accept() AcceptTCP()
		Addr() File() Close() SetDeadline()
	TCPConn{} DialTCP()
		LocalAddr() RemoteAddr() File() Close() CloseRead() CloseWrite()
		SetLinger() SetNoDelay() SetKeepAlive() SetKeepAlivePeriod()
		SetDeadline() SetReadDeadline() SetWriteDeadline()
		Read() Write() SetReadBuffer() SetWriteBuffer()
		ReadFrom()

	UDPAddr{} ResolveUDPAddr()
	UDPConn{} ListenUDP() ListenMulticatUDP() DialUDP()
		LocalAddr() RemoteAddr() File() Close()
		SetDeadline() SetReadDeadline() SetWriteDeadline()
		Read() ReadFrom() ReadFromUDP() ReadMsgUDP()
		Write() WriteTo() WriteToUDP() WriteMsgUDP()
		SetReadBuffer() SetWriteBuffer()

	UnixAddr{} ResolveUnixAddr()
	UnixListener{} ListenUnix()
	UnixConn{} DialUnix() ListenUnixgram()

	ErrWriteToConnected
	AddrError{} DNSConfigError{} DNSError{} Error{}
	InvalidAddrError{} OpError{} ParseError{}
// }}}
net/url// {{{
	QueryEscape() QueryUnescape()
	Values{} ParseQuery()
		Add() Del() Get() Set() Encode()
	Userinfo{} User() UserPassword()
		Username() Password()
	URL{} Parse() ParseRequestURI()
		Scheme User Host Path
		RawPath RawQuery Fragment
// }}}
net/http// {{{
	Handle() Handler{}
		TimeoutHandler() NotFoundHandler() RedirectHanlder()
		StripPrefix() FileServer() FileSystem{} Dir{}
	HandleFunc() HandlerFunc{}
		ResponseWriter{}
			Header() Write() WriteHeader()
		Request{}
			Method URL Proto ProtoMajor ProtoMinor ProtoAtLeast()
			Header Body Trailer RemoteAddr RequestURI TLS Close Cancel
			Host ContentLength TransferEncoding Referer() UserAgent()
			BasicAuth() Cookie() Cookies()
			FormValue() PostFormValue() FormFile() MultipartReader()
			ParseForm() Form PostForm ParseMultipartForm() MultipartForm
			Write() WriteProxy()
		Error() NotFound() Redirect()
		ServeFile() ServeContent() MaxBytesReader()
		SetCookie()
	ListenAndServe() ListenAndServerTLS() Serve()
	DefaultMaxHeaderBytes DefaultMaxIdleConnsPerHost
	DefaultServerMux ServeMux{} NewServeMux()
		Handle() HandleFunc() Handler() ServeHTTP()
	Server{}
		Addr Handler ReadTimeout WriteTimeout MaxHeaderBytes
		TLSConfig TLSNextProto ConnState ErrorLog
		ListenAndServe() ListenAndServerTLS() Serve() SetKeepAlivesEnabled()

	MethodGet MethodHead MethodPost MethodPut MethodPatch MethodDelete MethodConnect MethodOptions MethodTrace
	StatusContinue StatusOK
crypto/tls
	StatusMovedPermanently StatusNotModified
	StatusBadRequest StatusForbidden StatusNotFound
	StatusInternalServerError StatusBadGateway StatusNotImplemented
	Header{}
		Add() Del() Get() Set()
		Write() WriteSubset()
	Cookie{}
		Name Value Path Domain Expires RawExpires
		MaxAge Secure HttpOnly Raw Unparsed

	Response{} Get() Post() PostForm() Head()
		Status StatusCode Proto ProtoMajor ProtoMinor ProtoAtLeast()
		Header Body Trailer TLS Close Request
		ContentLength TransferEncoding Cookies() Location()
		Write()
	DefaultClient Client{}
		Transport RoundTripper{} DefaultTransport Transport{}
		CheckRedirect
		Jar CookieJar{}
		Get() Head() Post() PostFrom()
		Do() Request{} NewRequest()
			SetBasicAuth()
			AddCookie()

	TimeFormat
	StateNew
	ErrHeaderTooLong

	ParseTime()
	StatusText()
	ParseHTTPVersion()

	ReadRequest()
	ReadResponse()
	CanonicalHeaderKey()
	DetectContentType()

	ProxyFromEnvironment()
	ProxyURL()
	NewFileTransport()
	CloseNotifier{}
	ConnState()
	File{}
	Flusher{}
	Hijacker{}
	ProtocolError{}
// }}}
net/http/cgi
net/http/cookiejar
net/http/fcgi
net/http/httptest
net/http/httputil
net/http/internal
net/http/pprof
net/internal/socktest
net/mail
net/rpc
net/rpc/jsonrpc
net/smtp
net/textproto
// }}}
mime// {{{
mime/multipart
mime/quotedprintable
// }}}
text/template // {{{
	{{/* */}}
	{{$var := p}} {{p}}
	{{if p}} {{else}} {{end}}
	{{with p}} {{else}} {{end}}
	{{range p}} {{else}} {{end}}
	{{block b p}} {{end}} {{template t p}}

	Template{} Must() New() ParseFiles() ParseGlob()

		Parse() ParseFiles() ParseGlob()
		Name()
		Execute()
		New()
		Lookup()
		ExecuteTemplate()

		Option()
		Funcs()
		Delims()
		DefinedTemplates()
		Clone()
		AddParseTree()
		Templates()
	ExecError{}
	FuncMap{}

	HTMLEscape()
	HTMLEscapeString()
	HTMLEscaper()
	IsTrue()
	JSEscape()
	JSEscapeString()
	JSEscaper()
	URLQueryEscaper()
text/scanner
text/tabwriter
text/template/parse
// }}}
html// {{{// {{{
	EscapeString() UnescapeString()
// }}}
html/template// {{{
	Template{} Must() New() ParseFiles() ParseGlob()
		Execute() ExecuteTemplate()
// }}}
// }}}
image// {{{// {{{
	Config{} DecodeConfig()
	Image{} Decode()

	Paletted{} NewPaletted()
	Gray{} NewGray()
	Gray16{} NewGray16()
	Alpha{} NewAlpha()
	Alpha16{} NewAlpha16()
	RGBA{} NewRGBA()
	RGBA64{} NewRGBA64()
	NRGBA{} NewNRGBA()
	NRGBA64{} NewNRGBA64()
	CMYK{} NewCMYK()
	YCbCr{} NewYCbCr()
	NYCbCrA{} NewNYCbCrA()

	ZP Point{} Pt()
	ZR Rectangle{} Rect()
	Uniform{} NewUniform()

	Black White Transparent Opaque
	ErrFormat RegisterFormat()
// }}}
image/color// {{{// {{{
	Palette[]
	Color{}
	Model{}

	Gray{} Gray16{}
	Alpha{} Alpha16{}
	RGBA{} RGBA64{}
	NRGBA{} NRGBA64{}
	CMYK{}
	YCbCr{}
	NYCbCrA{}

	Black White
	RGBAModel
	CMYKModel
	NYCbCrAModel
	YCbCrModel
	CMYKToRGB()
	RGBToCMYK()
	RGBToYCbCr()
	YCbCrToRGB()
// }}}
image/color/palette
// }}}
image/draw// {{{// {{{
	Draw()
	DrawMask()
// }}}
image/internal/imageutil
// }}}
image/png// {{{
	DecodeConfig() Decode() Encode()
// }}}
image/gif// {{{
	DecodeConfig() Decode() Encode()
	EncodeAll() DecodeAll()
// }}}
image/jpeg// {{{
	DecodeConfig() Decode() Encode()
// }}}
// }}}
// }}}
math// {{{// {{{// {{{
	E Pi Phi
	Sqrt2 SqrtE SqrtPi SqrtPhi
	Ln2 Log2E Ln10 Log10E
	MaxFloat32 MaxFloat64
	MaxUint8 MaxUint16 MaxUint32 MaxUint64
	MaxInt8 MaxInt16 MaxInt32 MaxInt64
	MinInt8 MinInt16 MinInt32 MinInt64
	Sin() Asin() Sinh() Asinh() Sincos()
	Cos() Acos() Cosh() Acosh()
	Tan() Atan() Tanh() Atanh() Atan2()
	Pow() Pow10() Cbrt() Sqrt()
	Log() Log2() Log1p() Log10() Logb()
	Exp() Exp2() Expm1()
	Max() Min() Mod() Modf() NaN() IsNaN() Inf() IsInf()
	Gamma() Hypot() Lgamma() J0() J1() Jn() Y0() Y1() Yn()
	Ceil() Floor() Trunc() Abs() Signbit() Frexp() Ldexp() CopySign()
	Float32bits() Float32frombites() Float64bits() Float64frombits()
	Dim() Erf() Erfc() Ilogb() Nextafter() Nextafter32() Remainder()
// }}}
math/big
math/cmplx
math/rand
// }}}
sort// {{{
// }}}
container/heap// {{{
container/list
container/ring
// }}}
hash// {{{
hash/adler32
hash/crc32
hash/crc64
hash/fnv
// }}}
crypto// {{{
crypto/md5// {{{// {{{
	Sum() BlockSize Size
	New()
		BlockSize() Size()
		Write() Reset() Sum()
// }}}
crypto/hmac// {{{
	New() Equal()
// }}}
crypto/sha1
crypto/sha256
crypto/sha512
// }}}
crypto/rand// {{{
	Reader
	Int() Prime() Read()
// }}}
crypto/cipher// {{{// {{{
	Block{}
		BlockSize()
		Encrypt()
		Decrypt()
	BlockMode{} NewCBCDecrypter() NewCBCEncrypter()
		BlockSize() CryptBlocks()
// }}}
crypto/aes// {{{
	BlockSize
	NewCipher()
// }}}
crypto/des// {{{
	BlockSize
	NewCipher()
	NewTripleDESCihper()
// }}}
crypto/rc4
// }}}
crypto/rsa// {{{
	PrivateKey{} GenerateKey()
		Public() PublicKey{}
		decrypt() Sign()
		Precompute() validate()
	EncryptPKCS1v15() DecryptPKCS1v15()
	SignPKCS1v15() VerifyPKCS1v15()

	PSSSaltLengthAuto
	DecryptOAEP()
	EncryptOAEP()
	SignPSS()
	VerifyPSS()
	DecryptPKCS1v15SessionKey()
	GenerateMultiPrimeKey()

// }}}
crypto/dsa
crypto/ecdsa
crypto/subtle
crypto/elliptic
crypto/x509// {{{// {{{
	IsEncryptedPEMBlock() EncryptPEMBlock() DecryptPEMBlock()
	MarshalPKCS1PrivateKey() ParsePKCS1PrivateKey()
	MarshalPKIXPublicKey() ParsePKIXPublicKey()

	MarshalECPrivateKey()
	ParseECPrivateKey()

	CreateCertificate()
	ParseCertificate()
	CreateCertificateRequest()
	ParseCertificateRequest()

	ParseCRL()
	ParseCertificates()
	ParseDERCRL()
	ParsePKCS8PrivateKey()
	NewCertPool()
// }}}
crypto/x509/pkix
// }}}
crypto/tls// {{{
	Config{}
		Certificate:[]Certificate{} LoadX509KeyPair()
	Listen()
	Dial()
// }}}
// }}}
database/sql// {{{
	DB{} Open()
	Register()
database/sql/driver
	Driver{}
	Conn{}
		Prepare()
		Begin() Close()
	
// }}}
index/suffixarray// {{{
// }}}
// }}}
unicode// {{{// {{{
unicode/utf16
unicode/utf8
// }}}
strings// {{{
	Compare() EqualFold() Repeat() Join() Map()
	Count() Contains() ContainsAny() ContainsRune() HasPrefix() HasSuffix()
	Index() IndexAny() IndexByte() IndexFunc() IndexRune()
	LastIndex() LastIndexAny() LastIndexByte() LastIndexFunc()
	Fields() FieldsFunc() Split() SplitAfter() SplitAfterN() SplitN()
	Replace() Title() ToLower() ToTitle() ToUpper()
	Trim() TrimLeft() TrimRight() TrimSpace() TrimPrefix() TrimSuffix()
	TrimFunc() TrimLeftFunc() TrimRightFunc()
	NewReader() NewReplacer()
// }}}
strconv// {{{
	Atoi() Itoa()
	AppendUint() AppendInt() AppendFloat() AppendBool()
	AppendQuote() AppendQuoteToASCII() AppendQuoteToGraphic()
	AppendQuoteRune() AppendQuoteRuneToASCII() AppendQuoteRuneToGraphic()
	IsGraphic() IsPrint() CanBackquote()
	FormatInt() FormatUInt() FormatFloat() FormatBool()
	ParseInt() ParseUint() ParseFloat() ParseBool()
	Quote() QuoteToASCII() QuoteToGraphic()
	QuoteRune() QuoteRuneToASCII() QuoteRuneToGraphic()
	Unquote() UnquoteChar()
// }}}
regexp// {{{
	Match() MatchReader() MatchString() QuoteMeta()
	Regexp{} Compile() CompilePOSIX() MustCompile() MustCompilePOSIX()
		Find()
		FindString()
		FindSubmatch()
		FindIndex()

		FindAll()
		FindAllIndex()
		FindAllString()
		FindAllStringIndex()
		FindAllStringSubmatch()
		FindAllStringSubmatchIndex()
		FindAllSubmatch()
		FindAllSubmatchIndex()
		FindReadIndex()
		FindReadSubmatchIndex()
		FindStringIndex()
		FindStringSubmatch()
		findStringSubmatchIndex()
		FindSubmatchIndex()
		LiteralPrefix()
		Longest()
		Split()
		Match() MatchRead() MatchString()
		NumSubexp() SubexpNames()
		ReplaceAll() ReplaceAllFunc()
		ReplaceAllLiteral()
		ReplaceAllLiteralString()
		ReplaceAllString()
		ReplaceAllStringFunc()
		String()


regexp/syntax
// }}}
encoding// {{{
encoding/hex// {{{
	DecondeLen() Decode() DecodeString()
	EncodedLen() Encode() EncodeToString()
	Dump() Dumper()
// }}}
encoding/base64// {{{
	StdPadding NoPadding
	StdEncoding NewEncoding()
		DecodeLen() Decode() DecodeString()
		EncodeLen() Encode() EncodeToString()
		WithPadding()
// }}}
encoding/pem// {{{
	Decode()
	Block{} Encode() EncodeToMemory()
// }}}
encoding/json// {{{
	Marshal() MarshalIndent() Unmarshal()
	Decoder{} NewDecoder()
		Decode()
	Encoder{} NewEncoder()
		Encode()
// }}}
encoding/xml// {{{
	Header
	Marshal() MarshalIndent() Unmarshal()
	NewDecoder() NewEncoder()
// }}}
encoding/asn1
	Marshal()
	Unmarshal()
encoding/ascii85
encoding/base32
encoding/binary
encoding/csv
encoding/gob
// }}}
archive/tar// {{{
	Header{} FileInfoHeader()
	Writer{} NewWriter()
		WriteHeader() Write() Close() Flush()
	Reader{} NewReader()
		Next() Read()
archive/zip
// }}}
compress/gzip// {{{// {{{
	Reader{} NewReader()
		Read() Reset() Close() Multistream()
	Writer{} NewWriter() NewWriterLevel()
		Close() Flush() Reset() Write()
// }}}
compress/bzip2
compress/flate
compress/lzw
compress/zlib
// }}}
// }}}
go/ast// {{{// {{{
go/build
go/constant
go/doc
go/format
go/importer
go/internal/gccgoimporter
go/internal/gcimporter
go/parser
go/printer
go/scanner
go/token
go/types
// }}}
internal/golang.org/x/net/http2/hpack// {{{
internal/race
internal/singleflight
internal/syscall/windows/sysdll
internal/testenv
internal/trace
// }}}
syscall// {{{
// }}}
unsafe// {{{
	AlignOf() Offsetof() Sizeof()
// }}}
errors// {{{
	New()
// }}}
testing// {{{
testing/iotest
testing/quick
// }}}
debug/dwarf// {{{
debug/elf
debug/gosym
debug/macho
debug/pe
debug/plan9obj
// }}}
reflect// {{{
	Type{} TypeOf()
		PkgPath() Name() Size() Align() FieldAlign()
		Method() MethodByName() NumMethod()
		Field() FiledByIndex() FieldByName() FieldByNameFunc() NumField()
		Kind() Elem() Key() Len() Bits() NumOut() NumIn() In() Out()
		Implements() AssignableTo() ConvertibleTo() Comparable()

	Value{} ValueOf()
		Kind() Type() Addr() Elem() IsNil() IsValid() String()
		Convert()
		Int() Uint() Float() Complex() Bool() Pointer() UnsafeAddr()
		Bytes() Index() Len() Cap() Slice() Slice3()
		Call() CallSlice() MapIndex() MapKeys() Interface() InterfaceData()
		NumFiled() Field() FieldByIndex() FieldByName() FieldByNameFunc()
		NumMethod() Method() MethodByName()
		Close() Recv() Send() TryRecv() TrySend()
		Set() CanSet() CanAddr() CanInterface()
		SetInt() SetUint() SetFloat() SetComplex() SetPointer()
		SetString() SetBool() SetBytes() SetLen() SetCap() SetMapIndex()
		OverflowComplex() OverflowFloat() OverflowInt() OverflowUnit()

	ArrayOf()
	SliceOf()
	MapOf()
	ChanOf()
	FuncOf()
	PtrOf()

	MakeChan()
	MakeFunc()
	MakeMap()
	MakeSlice()
	New()
	NewAt()
	Zero()

	RecvDir
	Invalid
	SelectSend
	Copy()
	DeepEqal()
	Select()

	PrtTo()
	Append()
	AppendSlic()
	Indirect()
	ChanDir{}
	Kind{}
	Method{}
	SelectCase{}
	SelectDir{}
	SliceHeader{}
	StringHeader{}
	StructField{}
	StructTag{}
	ValueError{}

// }}}
// }}}

