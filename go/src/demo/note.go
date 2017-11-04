        c
      sh go
    vi php js
  ARM Linux HTTP
     mac vps
     win vpn
     usb hub
  git share back
     add del
     mod fix
     pro opt
  SSLVPN ETCVPN
    协议 流程
    框架 接口
    语句 表达式
数据结构 算法分析

version help env run
fmt fix vet get list doc
tool build test install clean

config init clone version help
status show diff grep reset
commit add mv rm checkout
branch merge rebase tag log
remote fetch pull push

package import type func const var
struct{} interface{} func() {}
if exp {} else {}
if exp; exp {} else {}
for {break}
for exp {continue}
for exp; exp; exp {}
for k, v := range m {}
switch {case exp: fallthrough}
switch exp {case exp: default}
switch t : v.(type) {case int:}
return goto defer recover() panic()
go select {case <-:}

0 0.0 "" '' ``
true false nil iota
int int8 int16 int32 int64
uint uint8 uint16 uint32 uint64
float32 float64 complex64 complex128
rune string bool error byte uintptr
* [...] ... [] map[] chan

complex() real() imag()
new() make() delete() close()
cap() len() append() copy()
panic() recover()
print() println()

io fmt log net bufio bytes
os flag path time runtime expvar sync
go unsafe syscall internal testing errors debug reflect
unicode strings strconv regexp encoding mime image text html
math sort container hash crypto index database archive compress

c
sh go
vi py js

ARM Linux HTTP

version help env run
list get doc fmt fix vet
tool build test clean install

diff patch

version help
config clone init
status diff add mv rm
commit reset checkout
branch merge tag log
remote fetch pull push
bisect blame grep show
rebase stash mergetool
reflog prune fsck gc
cherry clean describe
difftool mergetool
git svn init
git svn clone
git svn fetch
git svn rebase
git svn dcommit

add
blame
cat
changelist
checkout
cleanup
commit
copy
delete
diff
export
help
import
info
list
lock
log
merge
mergeinfo
mkdir
move
propdel
propedit
propget
proplist
propset
resolve
resolved
revert
status
switch
unlock
update

ls-tree
ls-files
ls-remote
cat-file


package import type const var func
'' "" ``
nil iota true false
int int8 int16 int32 int64
uint uint8 uint16 uint32 uint64
float32 float64 complex64 complex128
uintptr byte string rune error bool
* [...] ... [] map[] chan
struct{} interface{} func() {}

_, := , <-
{:,:} [:] () . ->
complex() real() imag()
new() make() delete() close()
len() cap() append() copy()
print() println()

if exp; exp {}
if exp {} else {}
for {break}
for exp {continue}
for exp; exp; exp {}
for k, v := range a {}
switch {case exp: fallthrough}
switch exp {case exp: default}
switch t := v.(type) {case int:}
return goto defer recover() panic()
go select {case <-:}

os flag log path time runtime sync expvar
io fmt bytes bufio net mime text html image
math container sort hash crypto database index
unicode strings strconv regexp encoding archive compress
go internal syscall unsafe errors debug testing reflect

os// {{{
	O_RDONLY O_WRONLY O_RDWR
	O_APPEND O_TRUNCATE
	O_CREATE O_EXCL O_SYNC

	SEEK_SET SEEK_CUR SEEK_END

	PathSeparator PathListSeparator DevNull

	ModeAppend ModeExclusive ModeTemporary
	ModeDir ModeSymlink
	ModeNamedPipe ModeSocket
	ModeSetuid ModeSetgid ModeSticky
	ModeDevice ModeCharDevice
	ModeType ModePerm

	ErrInvalid ErrPermission ErrExist ErrNotExist

	TempDir() Mkdir() MkdirAll() Remove() RemoveAll()
	File{} Open() OpenFile() Create() Pipe() NewFile()
	FileInfo{} Lstat() Stat() SameFile() Chown() Chmod() Chtimes()
	Link() Rename() Truncate() Symlink() Readlink() Lchown()

	LinkError{} PathError{}
	IsExist() IsNotExist() Ispermission() IsPathSeparator()

	Expand() ExpandEnv()
	Getwd() Chdir() Getpagesize() Hostname()
	Environ() Clearenv() Getenv() Setenv() UnsetEnv() LookupEnv()
	SyscallError{} NewSyscallError()

	Args[] Stdin Stdout Stderr Exit()
	Getpid() Getppid() Getuid() Geteuid() Getgid() Getegid() Getgroups()
	Process{} FindProcess() StartProcess() ProcAttr{} Signal{} ProcessState{}
// }}}
flag// {{{
	Parse() Parsed() Arg() Args() NArg() NFlag() Set() NewFlagSet()
	Visit() VisitAll() PrintDefaults() Lookup() UnquoteUsage()
	Var() Int() Uint() Int64() Uint64() Float64() String() Bool() Duration()
	IntVar() UintVar() Int64Var() Uint64Var() Float64Var() StringVar() BoolVar() DurationVar()
// }}}
log// {{{
	Print() Println() Printf()
	Fatal() Fatalln() Fatalf()
	Panic() Panicln() Panicf()
	Flags() Output() Prefix()
	SetFlags() SetOutput() SetPrefix()
	Logger{} New()
	Ldate Ltime LstdFlags
	Lmicroseconds LUTC
	Llongfile Lshortfile
// }}}
path// {{{
	Dir() Base() Ext()
	Join() Split()
	IsAbs() Match() Clean()
// }}}
time// {{{
	ANSIC
	Duration{} Nanosecond Microsecond Millisecond Second Minute Hour
	Month{} January February March April May June July August September October November December
	Weekday{} Sunday Monday Tuesday Wednesday Tursday Friday Saturday

	Time{} Now() Date() Unix() Parse() ParseInLocation()
	Duration{} Since() ParseDuration()
		Hours() Minutes() Seconds() Nanoseconds() String()
	Timer{} NewTimer() AfterFunc()
		C Reset() Stop()
	Ticker{} NewTicker()
		C Stop()
	Local UTC Location{} LoadLocation() FixedZone()
	Sleep() After() Tick()
	ParseError{}
// }}}
runtime// {{{
	Compiler GOARCH GOOS GOROOT()
	Version() NumCPU() NumGoroutine()
	Gosched() Goexit()
	Func{} FuncForPC()
	Caller() Callers()
	Stack()
	GOMAXPROCS()

	MemProfileRate
	ReadMemStats()
	MemProfile()
	MemProfileRecord()
	MemStats()

	ReadTrace()
	StartTrace()
	StopTrace()

	LockOSThread()
	UnlockOSThread()

	CPUProfile()
	GC()
	BlockProfile()
	Breakpoint()
	GoroutineProfile()
	NumCgoCall()
	SetBlockProfileRate()
	SetCPUProfileRate()
	SetFinalizer()
	ThreadCreateProfile()
	BlockProfileRecord{}
	Error{}
	StackRecord{}
	TypeAssertionError{}
// }}}
sync// {{{
	Locker{}
		Lock() Unlock()
	Mutex{}
		Lock() Unlock()
	RWMutex{}
		Lock() Unlock()
		RLock() RUnlock()
	Cond{} NewCond()
		Wait() Signal() Broadcast()
	WaitGroup{}
		Add() Wait() Done()
	Once{}
		Do()
	Pool{}
		Get() Put()
// }}}
expvar// {{{
	Do()
	Float{} NewFloat()
	Int{} NewInt()
	Map{} NewMap()
	String{} NewString()
	Var{} Get() Publish()
// }}}

io// {{{
	EOF
	Copy() CopyN() CopyBuffer()
	ReadAtLeast() ReadFull()
	WriteString()
	PipeReader{} Pipe()
	PipeWriter{} Pipe()
	LimitedReader{} LimitReader()
	MultiWriter()
	MultiReader()
	TeeReader()
	NewSectionReader()
// }}}
io/ioutil// {{{

// }}}
net// {{{
	IPv4len
	FlagUp
	IPv4bcast
	IPv6zero
	ErrWriteToConnected

	Listener{} Listen()
		Accept() Addr() Close()
	Conn{} Dial() DialTimeout()
		Close() Read() Write()
		LocalAddr() RemoteAddr()
		SetDeadline() SetReadDeadline() SetWriteDeadline()

	TCPAddr{} ResolveTCPAddr()
	TCPListener{} ListenTCP()
		Accept() Addr() Close()
		AcceptTCP() File() SetDeadline()
	TCPConn{} DialTCP()
		Close() Read() Write()
		LocalAddr() RemoteAddr()
		SetDeadline() SetReadDeadline() SetWriteDeadline()
		File() CloseRead() CloseWrite()
		ReadFrom()
		SetKeepAlive() SetKeepAlivePeriod()
		SetLinger() SetNoDelay()
		SetReadBuffer() SetWriteBuffer()

	UDPAddr{} ResolveUDPAddr()
	UDPConn{} DialUDP() ListenUDP() ListenMulticastUDP()
		Close() Read() Write()
		LocalAddr() RemoteAddr()
		SetDeadline() SetReadDeadline() SetWriteDeadline()
		SetReadBuffer() SetWriteBuffer()
		File()
		ReadFrom() ReadFromUDP()
		WriteTo() WriteToUDP()
		ReadMsgUDP() WriteMsgUDP()

	Interface{} Interfaces() InterfaceByIdex() InterfaceByName()
		Index Name MTU
		HardwareAddr HardwareAddr{}
		Flags Flags{}
		Addrs() MulticastAddrs()
	Addr{} InterfaceAddrs()
		Network() String()

	LookupAddr() LookupCNAME() LookupHost()
	LookupIP() LookupMX() LookupNS() LookupPort()
	LookupSRV() LookupTXT()
	JoinHostPort() SplitHostPort()

	IP[] ParseIP()
	IPNet{} ParseCIDR()
	IPMask{} CIDRMask() IPv4Mask()
	HardwareAddr{} ParseMAC()

	Pipe()
	IPv4()

	IPAddr{} ResolveIPAddr()
	IPConn{} DialIP()
	ListenIP()

	FileListener() ListenPacket()
	PacketConn{} FileConn() FilePacketConn()

	UnixAddr{} ResolveUnixAddr()
	UnixListener{} ListenUnixgram() ListenUnix()
	UnixConn{} DialUnix()

	AddrError{}
	DNSConfigError{}
	DNSError{}
	Dialer{}
	Error{}
	InvalidAddrError{}
	MX{}
	NS{}
	OpError{}
	ParseError{}
	SRV{}
	UnknownNetworkError
// }}}
net/http// {{{
	MethodGet
	MethodHead
	MethodPost
	MethodPut
	MethodPatch
	MethodDelete
	MethodConnect
	MethodOptions
	MethodTrace

	StatusContinue
	StatusOK
	StatusSeeOther
	StatusNotModified
	StatusForbidden
	StatusNotFound
	StatusInternalServeError

	DefaultMaxHeaderBytes
	DefaultMaxIdleConnsPerHost
	TimeFormat
	StateNew
	ErrHeaderTooLong
	ErrWriteAfterFlush
	ErrBodyReadAfterClose
	ErrHandlerTimeout
	ErrLineTooLong
	ErrMissingFile
	ErrNoCookie
	ErrSkipAltProtocol

	DefaultServerMux ServeMux{} NewServeMux()
	Handle() Handler{}
	FileServer()
	StripPrefix()
	TimeoutHandler()
	NotFoundHandler()
	RedirectHandler()
	HandleFunc() HandlerFunc{}
		ResponseWriter{}
			Header{} Header() WriteHeader() Write()
				Add() Del() Get() Set()
				Write() WriteSubset()
		Request{}
			Method RequestURI URL Proto ProtoMajor ProtoMinor
			Header Body Trailer

			ContentLength TransferEncoding
			ProtoAtLeast() Host BasicAuth() Referer() Useragent()
			Cookie() Cookies()

			Form PostForm MultipartForm ParseForm() ParseMultipartForm()
			FormValue() PostFormValue() FormFile() MultipartReader()

			Close RemoteAddr TLS Cancel
			Write() WriteProxy()
		Error()
		NotFound()
		Redirect()
		SetCookie()
		ServeFile()
		ServeContent()
		MaxBytesReader()
	Server{} ListenAndServe() ListenAndServeTLS() Serve()

	DefaultClient Client{}
	DefaultTransport Transport{} NewFileTransport()
	Response{} Get() Head() Post() PostForm()
		Status StatusCode Proto ProtoMajor ProtoMinor
		Header Body Trailer
		ContentLength TransferEncoding
		Close TLS
		Request
	Request{} NewRequest()
		AddCookie()
		SetBasicAuth()

	DetectContentType()
	CononicalHeaderKey()
	ParseHTTPVersion()
	ParseTime()
	ProxyFromEnvironment()
	ProxyURL()
	ReadRequest()
	ReadResponse()
	StatusText()

	CloseNotifier{}
	ConnState{}
	Cookie{}
	CookieJar{}
	Dir{}
	File{}
	FileSystem{}
	Flushed{}
	Hijacker{}
	ProtocolError{}
	RoundTripper{}
// }}}
text/template// {{{
	{{/**/}}
	{{exp}}
	{{$var:=exp}}
	{{if exp}}{{else}}{{end}}
	{{with exp}}{{else}}{{end}}
	{{range $i,$v := exp}}{{else}}{{end}}
	{{define "name"}}{{end}}
	{{template "name" exp}}
	{{block "name" exp}}{{end}}
	Template{} New() Must() ParseFiles() ParseGlob()
		Parse() ParseFiles() ParseGlob() New()
		Option() Funcs() Delims() AddParseTree()
		Name() Templates() Lookup() DefinedTemplates() Clone()
		Execute() ExecuteTemplate()
// }}}

crypto// {{{

crypto/rand
	Int() Prime() Read() Reader
crypto/subtle
crypto/elliptic

crypto/md5
	BlockSize Size New() Sum()
crypto/sha1
	BlockSize Size New() Sum()
crypto/sha256
	BlockSize Size New() Sum()
crypto/sha512
	BlockSize Size New() Sum()

crypto/aes
	BlockSize NewCipher()
crypto/des
	BlockSize NewCipher() NewTripleDESCipher()
crypto/cipher
	AEAD{} NewGCM() NewGCMWithNonceSize()
		NonceSize() OverHead()
		Seal() Open()
	BlockMode{} NewCBCDecrypter() NewCBCEncrypter()
		BlockSize() CryptBlocks()
	Stream{} NewCFBEncrypter() NewCFBDecrypter() NewCTR() NewOFB()
		XORKeyStream()

crypto/rsa
	SignPSS() VerfiyPSS()
	EncryptOAEP() DecryptOAEP()
	EncryptPKCS1v15() DecryptPKCS1v15() DecryptPKCS1v15SessionKey()
	SignPKCS1v15() VerifyPKCS1v15()
	PrivateKey{} GernerateKey() GernerateKeyMultiPrimeKey()
crypto/dsa
	GenerateParameters() GenerateKey()
	Sign() Verify()
crypto/ecdsa
	GenerateKey()
	Sign() Verify()
crypto/hmac

crypto/rc4
crypto/x509
	Certificate{} CreateCertificate() ParseCertificate() ParseCertificates()
	CertificateRequest{} CreateCertificateRequest() ParseCertificateRequest()
	MarshalPKCS1PrivateKey() ParsePKCS1PrivateKey() ParsePKCS8PrivateKey()
	MarshalECPrivateKey() ParseECPrivateKey()
	MarshalPKIXPublicKey() ParsePKIXPublicKey()
	DecryptPEMBlock() EncryptPEMBlock() IsEncryptedPEMBlock()
	CertPool{} NewCertPool()
	ParseCRL() ParseDERCRL()

crypto/x509/pkix
	Name{}
	Extension{}

crypto/tls
	Certificate{} LoadX509KeyPair() X509KeyPair()
	NewLRUClientSessionCache()
	Config{}
		Rand Time Certificates
		NameToCertificate GetCertificate
		RootCAs NextProtos ServerName InsecureSkipVerify
		ClientAuth ClientCAs
		CipherSuites PreferServerCipherSuites
		SessionTicketsDisabled SessionTicketKey ClientSessionCache
		MinVersion MaxVersion CurvePreferences
	Listen() NewListener()
	Dial() DialWithDialer()
	Client() Server()

// }}}
encoding// {{{
encoding/csv
encoding/god
encoding/xml
encoding/json
	Marshal() MarshalIndent()
	Unmarshal()
	Decoder{} NewDecoder()
		Decode()
		More() Token()
		Buffered() useNumber()
	Encoder{} NewEncoder()
		Encode()
encoding/ascii85
encoding/asn1
	Marshal() UnMarshal() UnMarshalWithParams()
encoding/pem
	Block{} Encode() EncodeToMemory() Decode()
		Type Headers Bytes
encoding/hex
	Decode() DecodeString() DecodedLen()
	Encode() EncodeToString() EncodedLen()
	Dump() Dumper()
encoding/binary
encoding/base32
encoding/base64
	NewDecoder() NewEncoder()
	StdEncoding URLEncoding Encoding{} NewEncoding()
		Decode() DecodeString() DecodeLen()
		Encode() EncodeToString() EncodeLen()
		WithPadding()
// }}}

