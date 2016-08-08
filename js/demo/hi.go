package main

import (
	"net/http"
	"flag"
	"fmt"
	"log"
)

var (
	path = flag.String("path", "./", "http server file path")
	addr = flag.String("addr", ":9090", "http listen addr")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s: %v\n", f.Name, f.Value)
	})

	http.Handle("/", http.FileServer(http.Dir(*path)))
	log.Fatalln(http.ListenAndServe(*addr, nil))
}

