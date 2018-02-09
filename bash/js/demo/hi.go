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

func conf() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s: %v\n", f.Name, f.Value)
	})
}

type echo struct {
	Name string
}

func main() {
	conf()

	http.HandleFunc("/", log(func(w http.ResponseWriter, r *http.Request) {
		switch r.URL.Path {
		case "/":
			http.ServeFile(w, r, *index)
		case "/hr":
			w.Write([]byte("{\"Name\":1123}"))
			return
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
