package main // {{{
// }}}
import ( // {{{
	"bytes"
	"crypto"
	"crypto/rand"
	"math/big"
	random "math/rand"
	"net/http"
	"time"

	"crypto/sha1"

	"crypto/rsa"

	"crypto/x509"

	"crypto/sha256"

	"crypto/aes"

	"crypto/cipher"

	"encoding/base64"
	"encoding/pem"

	"fmt"
	"io/ioutil"
	// "log"
	"os"
)

// }}}

func sign(save, text string) { // {{{
	s := sha1.New()
	s.Write([]byte(text))

	b, _ := rsa.SignPKCS1v15(rand.Reader, key, crypto.SHA1, s.Sum(nil))
	ioutil.WriteFile(save, []byte(base64.StdEncoding.EncodeToString(b)), 0666)
}

// }}}
func open(save string) string { // {{{
	f, _ := os.Open(save)
	src, _ := ioutil.ReadAll(f)
	src, _ = base64.StdEncoding.DecodeString(string(src))

	dst, _ := rsa.DecryptPKCS1v15(rand.Reader, key, src)
	return string(dst)
}

// }}}
func verify(save, text string) bool { // {{{
	s := sha1.New()
	s.Write([]byte(text))

	f, _ := os.Open(save)
	b, _ := ioutil.ReadAll(f)
	b, _ = base64.StdEncoding.DecodeString(string(b))

	e := rsa.VerifyPKCS1v15(pub, crypto.SHA1, s.Sum(nil), b)
	if e == nil {
		return true
	} else {
		return false
	}
}

// }}}
func seal(save, text string) { // {{{
	b, _ := rsa.EncryptPKCS1v15(rand.Reader, pub, []byte(text))
	ioutil.WriteFile(save, []byte(base64.StdEncoding.EncodeToString(b)), 0666)
}

// }}}

func loadreq(req string) (Req *x509.CertificateRequest) { // {{{
	f, _ := os.Open(req)
	b, _ := ioutil.ReadAll(f)
	pb, _ := pem.Decode(b)
	Req, _ = x509.ParseCertificateRequest(pb.Bytes)
	return Req
}

// }}}
func loadcert(cert string) (Cert *x509.Certificate) { // {{{
	f, _ := os.Open(cert)
	b, _ := ioutil.ReadAll(f)
	pb, _ := pem.Decode(b)
	Cert, _ = x509.ParseCertificate(pb.Bytes)
	return Cert
}

// }}}
func loadpub(pub string) (Pub *rsa.PublicKey) { // {{{
	f, _ := os.Open(pub)
	b, _ := ioutil.ReadAll(f)
	pb, _ := pem.Decode(b)
	pp, _ := x509.ParsePKIXPublicKey(pb.Bytes)
	Pub = pp.(*rsa.PublicKey)
	return Pub
}

// }}}
func loadkey(key string) (Key *rsa.PrivateKey) { // {{{
	f, _ := os.Open(key)
	b, _ := ioutil.ReadAll(f)
	pb, _ := pem.Decode(b)
	Key, _ = x509.ParsePKCS1PrivateKey(pb.Bytes)
	return Key
}

// }}}
func generate(key, pub string) *rsa.PrivateKey { // {{{
	priv, _ := rsa.GenerateKey(rand.Reader, 1024)

	if true {
		b := x509.MarshalPKCS1PrivateKey(priv)
		p := pem.Block{"PRIVATE KEY", nil, b}
		ioutil.WriteFile(key, pem.EncodeToMemory(&p), 0666)
	}

	if true {
		b, _ := x509.MarshalPKIXPublicKey(priv.Public())
		p := pem.Block{"PUBLIC KEY", nil, b}
		ioutil.WriteFile(pub, pem.EncodeToMemory(&p), 0666)
	}

	return priv
}

// }}}

func decrypt(save string) string { // {{{
	b, _ := aes.NewCipher(keyiv[:16])
	bm := cipher.NewCBCDecrypter(b, keyiv[16:])

	f, _ := os.Open(save)
	src, _ := ioutil.ReadAll(f)
	src, _ = base64.StdEncoding.DecodeString(string(src))
	dst := make([]byte, len(src))
	bm.CryptBlocks(dst, src)

	dst = PKCS5UnPadding(dst)
	return string(dst)
}

// }}}
func encrypt(save, txt string) { // {{{
	b, _ := aes.NewCipher(keyiv[:16])
	bm := cipher.NewCBCEncrypter(b, keyiv[16:])

	src := PKCS5Padding([]byte(txt), bm.BlockSize())
	dst := make([]byte, len(src))
	bm.CryptBlocks(dst, src)

	ioutil.WriteFile(save, []byte(base64.StdEncoding.EncodeToString(dst)), 0666)
}

// }}}
func PKCS5UnPadding(text []byte) []byte { // {{{
	return text[:len(text)-int(text[len(text)-1])]
}

// }}}
func PKCS5Padding(text []byte, blockSize int) []byte { // {{{
	padding := blockSize - len(text)%blockSize
	padtext := bytes.Repeat([]byte{byte(padding)}, padding)
	return append(text, padtext...)
}

// }}}

var ( // {{{
	keyiv [32]byte

	key *rsa.PrivateKey
	pub *rsa.PublicKey

	cacert *x509.Certificate
	cert   *x509.Certificate
)

// }}}
func main() {
	switch os.Args[1] {
	case "aes": // {{{
		if len(os.Args) > 3 {
			keyiv = sha256.Sum256([]byte(os.Args[2]))
			if len(os.Args) > 4 {
				encrypt(os.Args[3], os.Args[4])
				fmt.Println(decrypt(os.Args[4]))
			} else {
				fmt.Println(decrypt(os.Args[3]))
			}
		} else {
			fmt.Println("usage: {aes} salt file [text]")
		}
		// }}}
	case "rsa": // {{{
		if len(os.Args) > 4 {
			switch os.Args[2] {
			case "gen":
				generate(os.Args[3], os.Args[4])
			case "seal":
				pub = loadpub(os.Args[3])
				seal(os.Args[4], os.Args[5])
			case "open":
				key = loadkey(os.Args[3])
				fmt.Println(open(os.Args[4]))
			case "sign":
				key = loadkey(os.Args[3])
				sign(os.Args[4], os.Args[5])
			case "verify":
				pub = loadpub(os.Args[3])
				if verify(os.Args[4], os.Args[5]) {
					fmt.Println("verify success")
				} else {
					fmt.Println("verify failure")
				}
			}
		} else {
			fmt.Println("usage: rsa gen key pub")
			fmt.Println("usage: rsa seal pub file text")
			fmt.Println("usage: rsa open key file")
			fmt.Println("usage: rsa sign key file text")
			fmt.Println("usage: rsa verify pub file text")
		}
	// }}}
	case "x509": // {{{
		if len(os.Args) > 3 {
			switch os.Args[2] {
			case "ca":
				key = loadkey(os.Args[4])
				pub = loadpub(os.Args[5])

				cacert = &x509.Certificate{
					SerialNumber: big.NewInt(random.Int63n(time.Now().Unix())),
				}
				b, _ := x509.CreateCertificate(rand.Reader, cacert, cacert, pub, key)

				pb := &pem.Block{"CERTIFICATE", nil, b}
				ioutil.WriteFile(os.Args[3], pem.EncodeToMemory(pb), 0666)
			case "req":
				key = loadkey(os.Args[4])

				cert := &x509.CertificateRequest{}
				b, _ := x509.CreateCertificateRequest(rand.Reader, cert, key)

				pb := &pem.Block{"CERTIFICATE", nil, b}
				ioutil.WriteFile(os.Args[3], pem.EncodeToMemory(pb), 0666)
			case "res":
				cacert = loadcert(os.Args[4])
				key = loadkey(os.Args[5])
				req := loadreq(os.Args[6])

				cert = &x509.Certificate{
					SerialNumber: big.NewInt(random.Int63n(time.Now().Unix())),
				}
				b, _ := x509.CreateCertificate(rand.Reader, cert, cacert, req.PublicKey, key)

				pb := &pem.Block{"CERTIFICATE", nil, b}
				ioutil.WriteFile(os.Args[3], pem.EncodeToMemory(pb), 0666)
			}
		} else {
			fmt.Println("usage: x509 ca cacert key pub")
			fmt.Println("usage: x509 req crt key")
			fmt.Println("usage: x509 res cert cacert key req")
		}
	// }}}
	case "https": // {{{
		if len(os.Args) > 5 {
			http.Handle("/", http.FileServer(http.Dir(os.Args[3])))
			fmt.Println(http.ListenAndServeTLS(os.Args[2], os.Args[4], os.Args[5], nil))
		} else {
			fmt.Println("usage: https addr path cert key")
		}
		// }}}
	}
	return
}
