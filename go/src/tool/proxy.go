package main

import (
	"flag"
	"io"
	"log"
	"net"
)

var (
	listen = flag.String("l", ":9898", "listen address")
	server = flag.String("s", ":22", "server address")
)

func copy(w rune, i io.Reader, o io.Writer) {
	var b = make([]byte, 1024)

	for {
		n, e := i.Read(b)
		if e != nil || n <= 0 {
			break
		}
		log.Printf("\033[31mproxy: %c %d\033[0m\n%s\n", w, n, string(b[0:64]))
		o.Write(b)
	}
}

func main() {
	flag.Parse()

	l, _ := net.Listen("tcp4", *listen)
	log.Printf("\033[31mlisten %s\033[0m", *listen)

	for {
		c, _ := l.Accept()
		log.Printf("\033[31maccept %s\033[0m", c.RemoteAddr())
		go func() {

			s, _ := net.Dial("tcp4", *server)
			log.Printf("\033[31mconnect %s\033[0m", *server)

			// cmd := exec.Command("/usr/bin/ssh", "shy@localhost")
			// e := cmd.Start()
			// o, e := cmd.StdinPipe()
			// i, e := cmd.StdoutPipe()

			go copy('c', c, s)
			copy('s', s, c)
		}()
	}
}
