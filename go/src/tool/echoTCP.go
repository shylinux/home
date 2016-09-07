package main

import (
	"flag"
	"fmt"
	"net"
	"time"
)

var (
	addr = flag.String("l", ":9191", "listen address")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})
	println()

	l, _ := net.Listen("tcp4", *addr)
	b := make([]byte, 1024)
	for {
		c, _ := l.Accept()
		go func() {
			for {
				b = b[:1024]
				n, e := c.Read(b)
				b = b[:n]
				if e != nil {
					break
				}
				fmt.Printf("[%02d:%02d:%02d] %s (size:%d) %s\n", time.Now().Hour(), time.Now().Minute(), time.Now().Second(), c.RemoteAddr(), n, b)
				c.Write([]byte(string(b[:n]) + "\n" + time.Now().String()))
			}
			c.Close()
		}()
	}
}
