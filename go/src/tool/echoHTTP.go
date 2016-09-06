package main

import (
	"flag"
	"fmt"
	"net/http"
	"time"
)

var (
	addr = flag.String("l", ":9090", "listen address")
	text = flag.String("t", "hello http world!\n", "send message")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)

	})
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		fmt.Printf("%s  %s  %s\n", r.RemoteAddr, r.Method, r.URL.Path)
		t := r.FormValue("echo")
		if t == "" {
			w.Write([]byte(*text + time.Now().String() + "\n"))
		} else {
			w.Write([]byte(t + "\n"+time.Now().String() + "\n"))
		}
	})

	http.ListenAndServe(*addr, nil)
}
