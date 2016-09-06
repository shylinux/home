package main

import (
	"net/http"
	"os"
	"io"
	"flag"
	"fmt"
	"net/url"
)

var (
	path = flag.String("u", "http://localhost:9090", "url")
	text = flag.String("t", "hello http world!", "echo message")
)


func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v", f.Name, f.Value)
	})
	println()
	println()

	r, _ := http.Get(*path+"?echo="+url.QueryEscape(*text))
	io.Copy(os.Stdout, r.Body)
}

