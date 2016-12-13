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
)

func conf() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s: %v\n", f.Name, f.Value)
	})
}

func main() {
	conf()

	var file string
	if len(flag.Args()) > 0 {
		file = flag.Arg(0)
	} else {
		file = "./"
	}
	fmt.Printf("file: %v\n", file)

	info, _ := os.Stat(file)
	if info.IsDir() {
		http.Handle("/", http.FileServer(http.Dir(file)))
	} else {
		http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
			f, _ := os.Open(file)
			io.Copy(w, f)
		})
	}

	http.ListenAndServe(*addr, nil)
}
