package main

import (
	"flag"
	"fmt"
	"io"
	"net/http"
	"os"
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

	info, _ := os.Stat(*path)
	if info.IsDir() {
		http.Handle("/", http.FileServer(http.Dir(*path)))
	} else {
		http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
			f, _ := os.Open(*path)
			io.Copy(w, f)
		})
	}

	http.ListenAndServe(*addr, nil)
}
