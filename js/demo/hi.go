package main

import (
	"flag"
	"fmt"
	"net/http"
)

var (
	path  = flag.String("path", "./", "http server file path")
	addr  = flag.String("addr", ":9090", "http listen addr")
	index = flag.String("index", "hi.html", "http default page")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s: %v\n", f.Name, f.Value)
	})

	http.HandleFunc("/", log(func(w http.ResponseWriter, r *http.Request) {
		if r.URL.Path == "/" {
			http.ServeFile(w, r, *index)
		}

		http.ServeFile(w, r, *path+r.URL.Path)
	}))

	http.ListenAndServe(*addr, nil)

	println("listen error")
}

func log(h http.HandlerFunc) http.HandlerFunc {
	return func(w http.ResponseWriter, r *http.Request) {
		println(r.RemoteAddr, r.Method, r.URL.Path)

		h(w, r)

		defer func() {
			if e := recover(); e != nil {
				println(e)
			}
		}()

	}
}
