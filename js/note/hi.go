package main

import (
	_ "bytes"
	"flag"
	"fmt"
	"html/template"
	"io"
	"net/http"
	"os"
)

var (
	addr = flag.String("l", ":9090", "listen address")
	path = flag.String("p", "./", "server path")
)

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s: %v\n", f.Name, f.Value)
	})
	fmt.Printf("pid: %d\n", os.Getpid())

	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		if r.Method == "GET" {
			f, e := os.Open(*path + r.RequestURI)
			if e != nil {
				http.Error(w, "not found", http.StatusNotFound)
				return
			}
			defer f.Close()

			io.Copy(w, f)
			return
		} else if r.Method == "POST" {
			r.ParseForm()

			w.WriteHeader(200)
			w.Header().Set("Content-Type", "text/html")

			t, _ := template.New("echo").Parse(`
			<table>
			{{range $k, $v := .}}
				<tr><th>{{$k}}</th>
				{{range $i, $x := $v}}
					<td>{{$x}}</td>
				{{end}}
				</tr>
			{{end}}
			</table>
			`)
			t.Execute(w, r.PostForm)

			/*
				b := bytes.NewBuffer(make([]byte, 0, 1024))

				for k, v := range r.PostForm {
					for _, x := range v {
						fmt.Fprintf(b, "%s: %s", k, x)
					}
				}

				io.Copy(w, b)
			*/

			return
		}
	})

	http.ListenAndServe(*addr, nil)
}
