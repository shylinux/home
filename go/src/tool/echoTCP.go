package main

import (
	"flag"
	"fmt"
	"net"
)

var (
	addr = flag.String("l", ":9191", "listen address")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})

	l, _ := net.Listen("tcp4", *addr)
	b := make([]byte, 1024)
	for {
		c, _ := l.Accept()
		go func(c net.Conn) {
			for {
				_, e := c.Read(b)
				if e != nil {
					break
				}
				fmt.Printf(string(b))
				c.Write(b)
			}
			c.Close()
		}(c)
	}
}
