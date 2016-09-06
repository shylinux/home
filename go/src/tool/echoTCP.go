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
				n, e := c.Read(b)
				if e != nil {
					break
				}
				fmt.Printf(c.RemoteAddr().String()+" "+string(b)+"\n")
				c.Write([]byte(string(b[:n])+"\n"+time.Now().String()))
			}
			c.Close()
		}()
	}
}
