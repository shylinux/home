package main

import (
	"flag"
	"fmt"
	"net"
	"time"
)

var (
	addr = flag.String("l", ":9292", "listen address")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})

	a, _ := net.ResolveUDPAddr("udp4", *addr)
	l, _ := net.ListenUDP("udp4", a)
	b := make([]byte, 1024)
	for {
		_, aa, _ := l.ReadFromUDP(b)
		fmt.Printf(string(b))
		l.WriteToUDP([]byte(string(b)+time.Now().String()+"\n"), aa)
	}
}
