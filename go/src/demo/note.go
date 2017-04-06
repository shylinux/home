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
git svn clone
git svn fetch
git svn rebase
git svn dcommit

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
crypto// {{{
crypto/md5
	BlockSize Size New() Sum()
crypto/sha1
	BlockSize Size New() Sum()
crypto/sha256
	BlockSize Size New() Sum()
crypto/sha512
	BlockSize Size New() Sum()

crypto/rand
	Int() Prime() Read() Reader

crypto/cipher
	BlockMode{} NewCBCDecrypter() NewCBCEncrypter()
		BlockSize() CryptBlocks()
crypto/aes
	BlockSize NewCipher()
crypto/des
	BlockSize NewCipher()

crypto/rsa
	DecryptOAEP() DecryptPKCS1v15() DecryptPKCS1v15SessionKey()
	EncryptOAEP() EncryptPKCS1v15()
	SignPSS() SignPKCS1v15()
	VerifyPSS() VerifyPKCS1v15()
	PrivateKey{} GernerateKey() GenerateMutliPrimeKey()
		Precompute() Validate()
		Decrypt() Sign()
		PublicKey{} Public()
crypto/dsa
crypto/ecdsa
crypto/elliptic
crypto/hmac
crypto/rc4
crypto/subtle

crypto/tls
crypto/x509
	MarshalPKCS1PrivateKey() ParsePKCS1PrivateKey()
	MarshalPKIXPublicKey() ParsePKIXPublicKey()

	DecryptPEMBlock()
	EncryptPEMBlock()
	IsEncryptedPEMBlock()
	ExtKeyUsageAny
	NotAuthorizedToSign
	KeyUsageDigitalSignature
	PEMCipherDES
	CreateCertificate()
	CreateCertificateRequest()
	MarshalECPrivateKey()
	ParseCRL()
	ParseCertificates()
	ParseDERCRL()
	ParseECPrivateKey()
	ParsePKCS8PrivateKey()
	NewCertPool
	ParseCertificate()
	ParseCertificateRequest()
	CertPool{}
crypto/x509/pkix
// }}}
encoding// {{{
encoding/pem
	Block{} Encode() Decode()
		Type Headers Bytes
// }}}

