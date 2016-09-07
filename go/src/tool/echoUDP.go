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
		b = b[:1024]
		n, aa, _ := l.ReadFromUDP(b)
		b = b[:n]
		fmt.Printf("[%02d:%02d:%02d] %s (size:%d) %s\n", time.Now().Hour(), time.Now().Minute(), time.Now().Second(), aa, n, b)
		bb := []byte(string(b) + "\n" + time.Now().String() + "\n")
		l.WriteToUDP(bb, aa)
	}
}
