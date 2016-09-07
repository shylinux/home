package main

import (
	"flag"
	"fmt"
	"net"
)

var (
	addr = flag.String("l", "1.0.1.254:9191", "connect address")
	text = flag.String("t", "hello tcp world!", "send message")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})
	println()

	c, _ := net.Dial("tcp4", *addr)
	c.Write([]byte(*text))

	b := make([]byte, 1024)
	c.Read(b)
	fmt.Printf(string(b) + "\n")
	c.Close()
}
