package main

import (
	"crypto/aes"
	"crypto/cipher"
	"crypto/rand"
	"crypto/rsa"
	"crypto/x509"
	"encoding/pem"
	"os"
)

func main() {
	buf := [1024]byte{}
	b, _ := aes.NewCipher([]byte("1234567890abcdef"))
	{
		cm := cipher.NewCBCEncrypter(b, []byte("123456&*()abcdef"))
		cm.CryptBlocks(buf[:], []byte("hello aes world!"))
	}
	{
		txt := [1024]byte{}
		cm := cipher.NewCBCDecrypter(b, []byte("123456&*()abcdef"))
		cm.CryptBlocks(txt[:], buf[:])
		println(string(txt[:16]))
	}

	var pri *rsa.PrivateKey
	var pub *rsa.PublicKey

	if false {
		pri, _ = rsa.GenerateKey(rand.Reader, 1024)
	}

	{
		b := [4096]byte{}
		f, _ := os.Open("private.pem")
		n, _ := f.Read(b[:])
		p, _ := pem.Decode(b[:n])
		pri, _ = x509.ParsePKCS1PrivateKey(p.Bytes)
	}
	{
		b := [4096]byte{}
		f, _ := os.Open("public.pem")
		n, _ := f.Read(b[:])
		p, _ := pem.Decode(b[:n])
		pp, _ := x509.ParsePKIXPublicKey(p.Bytes)
		pub = pp.(*rsa.PublicKey)
	}

	if true {
		b, _ := rsa.SignPKCS1v15(rand.Reader, pri, 0, []byte("hello rsa world\n"))
		if rsa.VerifyPKCS1v15(pub, 0, []byte("hello rsa world\n"), b) == nil {
			println("verify ok")
		} else {
			println("verify err")
		}
	}

	if true {
		mi, e := rsa.EncryptPKCS1v15(rand.Reader, pub, []byte("hello rsa world!\n"))
		t, e := rsa.DecryptPKCS1v15(rand.Reader, pri, mi[:])
		println(string(t[:]))
		println(e)
	}

	if false {
		d := x509.MarshalPKCS1PrivateKey(pri)
		b := &pem.Block{Type: "RSA PRIVATE KEY", Bytes: d}
		f, e := os.Create("private.pem")
		pem.Encode(f, b)
		f.Close()
		println(e)
	}

	if false {
		d, e := x509.MarshalPKIXPublicKey(pub)
		b := &pem.Block{Type: "RSA PUBLIC KEY", Bytes: d}
		f, e := os.Create("public.pem")
		pem.Encode(f, b)
		f.Close()
		println(e)
	}

}
