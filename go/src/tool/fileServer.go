package main

import (
	"flag"
	"fmt"
	"net/http"
)

var (
	addr = flag.String("l", ":9090", "listen address")
	path = flag.String("p", "./", "server file path")
)

func conf() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s:%v\n", f.Name, f.Value)
	})
}

func main() {
	conf()

	http.Handle("/", http.FileServer(http.Dir(*path)))
	http.ListenAndServe(*addr, nil)
}
