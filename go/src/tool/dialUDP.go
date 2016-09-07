package main

import (
	"flag"
	"fmt"
	"net"
)

var (
	addr = flag.String("l", "1.0.1.254:9292", "send address")
	text = flag.String("t", "hello udp world!", "send message")
)

func main() {
	flag.Parse()
	flag.Visit(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})
	println()

	a, _ := net.ResolveUDPAddr("udp4", *addr)
	l, _ := net.DialUDP("udp4", nil, a)
	l.Write([]byte(*text))

	b := make([]byte, 2048)
	l.Read(b)
	fmt.Printf(string(b))
	l.Close()
}
