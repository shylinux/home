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
	println()

	a, _ := net.ResolveUDPAddr("udp4", *addr)
	l, _ := net.ListenUDP("udp4", a)
	b := make([]byte, 1024)
	for {
		_, aa, _ := l.ReadFromUDP(b)
		fmt.Printf(aa.String()+" "+string(b)+"\n")
		bb := []byte(string(b)+"\n"+time.Now().String()+"\n")
		l.WriteToUDP(bb, aa)
	}
}
