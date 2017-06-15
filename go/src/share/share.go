package main // {{{
// }}}
import ( // {{{
	"crypto/md5"
	"encoding/hex"
	"fmt"
	"io"
	"io/ioutil"
	"log"
	"net/http"
	"os"
	"strings"
)

// }}}
type command struct { // {{{
	text string
	hand func() int
}

// }}}
type argument struct { // {{{
	text string
	val  string
}

// }}}
func index(w http.ResponseWriter, r *http.Request) { // {{{

	if r.Method == "GET" {
		fs, e := os.Stat("." + r.URL.Path)
		if e != nil {
			w.Write([]byte("erorr"))
			return
		}

		if fs.IsDir() {
			w.Header().Set("Content-Type", "text/html; charset=utf-8")
			w.Write([]byte(fmt.Sprintf("<DOCTYPE html><head><meta name='viewport' content='width=device-width, initial-scale=1.0'></head><body><form method='POST' action='%s' enctype='multipart/form-data'><input type='file' name='file'><input type='submit'></form></body>", r.URL.Path)))

			w.Write([]byte(fmt.Sprintf("<a href='/'>home: /</a> ")))
			back := r.URL.Path[0 : len(r.URL.Path)-1]
			back = back[0 : strings.LastIndex(back, "/")+1]
			w.Write([]byte(fmt.Sprintf("<a href='%s'>back: %s</a> ", back, back)))
			w.Write([]byte(fmt.Sprintf("path: %s<hr>", r.URL.Path)))

			log.Printf("[%s] %s %s\n", r.RemoteAddr, r.Method, r.URL)

			if fl, e := ioutil.ReadDir(fs.Name()); e == nil {
				w.Write([]byte(fmt.Sprintf("<pre>")))
				for i, v := range fl {
					if v.IsDir() {
						w.Write([]byte(fmt.Sprintf("%d %s    ---   <a href='%s/'> %s</a><br>", i, v.ModTime().Format("2006-01-02 15:04:05"), v.Name(), v.Name())))
					} else {
						size := ""
						switch {
						case v.Size() > 10000000000:
							size = fmt.Sprintf("%dG", v.Size()/1000000000)
						case v.Size() > 10000000:
							size = fmt.Sprintf("%dM", v.Size()/1000000)
						case v.Size() > 10000:
							size = fmt.Sprintf("%dK", v.Size()/1000)
						default:
							size = fmt.Sprintf("%dB", v.Size())
						}

						w.Write([]byte(fmt.Sprintf("%d %s %6s   <a href='%s'> %s</a><br>", i, v.ModTime().Format("2006-01-02 15:04:05"), size, v.Name(), v.Name())))
					}
				}
				w.Write([]byte(fmt.Sprintf("</pre>")))
			}
		} else {
			if f, e := os.Open("." + r.URL.Path); e == nil {
				defer f.Close()

				h := md5.New()
				io.Copy(h, f)
				hh := hex.EncodeToString(h.Sum(nil))

				log.Printf("[%s] %s %s %s\n", r.RemoteAddr, r.Method, r.URL, hh)

				f.Seek(0, os.SEEK_SET)
				io.Copy(w, f)
			}
		}
	}

	if r.Method == "POST" {
		if u, h, e := r.FormFile("file"); e == nil {
			defer u.Close()
			var name string = "." + r.URL.Path + h.Filename

			ha := md5.New()
			io.Copy(ha, u)
			hh := hex.EncodeToString(ha.Sum(nil))
			log.Printf("[%s] %s %s %s\n", r.RemoteAddr, r.Method, name, hh)

			if info, e := os.Stat(name); e == nil {
				log.Printf("%s already exists\n", info.Name())
				w.Write([]byte(fmt.Sprintf("%s already exists\n", info.Name())))
				return
			}

			if f, e := os.Create(name); e == nil {
				defer f.Close()
				u.Seek(0, os.SEEK_SET)
				io.Copy(f, u)
				w.Write([]byte(fmt.Sprintf("%s upload success\n", name)))
			}
		}
	}
}

// }}}
func listen() int { // {{{
	var args = map[string]*argument{
		"help":  &argument{"show listen help", "\b \t"},
		"addr":  &argument{"socket listen address", ":9090"},
		"share": &argument{"share dirent path", "./"},
		"trash": &argument{"trash dirent path", "./"},
		"log":   &argument{"trash dirent path", "./share.log"},
	}

	if len(os.Args) > 2 && os.Args[2] == "help" {
		fmt.Printf("use share command to control your file operation\n")
		fmt.Printf("usage: share listen [addr [share [log]]] [args]\n")
		arg := args["addr"]
		fmt.Printf("\t%s=%s : %s\n", "addr", arg.val, arg.text)
		arg = args["share"]
		fmt.Printf("\t%s=%s : %s\n", "share", arg.val, arg.text)
		arg = args["log"]
		fmt.Printf("\t%s=%s : %s\n\n", "log", arg.val, arg.text)

		fmt.Printf("usage: other option [args] format key=val\n")
		for k, v := range args {
			fmt.Printf("\t%s=%s\t%s\n", k, v.val, v.text)
		}
		os.Exit(1)
	}

	if len(os.Args) > 2 && strings.Index(os.Args[2], "=") < 0 {
		arg := args["addr"]
		arg.val = os.Args[2]
	}

	if len(os.Args) > 3 && strings.Index(os.Args[3], "=") < 0 {
		arg := args["share"]
		arg.val = os.Args[3]
	}

	if len(os.Args) > 4 && strings.Index(os.Args[4], "=") < 0 {
		arg := args["log"]
		arg.val = os.Args[4]
	}

	for _, v := range os.Args {
		pos := strings.Index(v, "=")
		if pos < 0 {
			continue
		}

		arg := args[v[0:pos]]
		arg.val = v[pos+1:]
	}

	arg := args["log"]
	l, e := os.OpenFile(arg.val, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 600)
	if e != nil {
		fmt.Printf("open log error")
		return 1
	}

	log.SetOutput(l)

	if true {
		for k, v := range args {
			log.Printf("\t%s=%s\t%s\n", k, v.val, v.text)
		}
	}

	arg = args["share"]
	os.Chdir(arg.val)

	http.HandleFunc("/", index)

	arg = args["addr"]
	fmt.Printf("start listen %s\n", arg.val)
	http.ListenAndServe(arg.val, nil)

	return 1
}

// }}}
var cmds = map[string]command{ // {{{
	"help":   command{"share usage help", nil},
	"listen": command{"socket listen address", listen},
}

// }}}
func help() int { // {{{
	fmt.Printf("share usage help\n")
	for k, v := range cmds {
		fmt.Printf("\t%s: %s\n", k, v.text)
	}
	return 1
}

// }}}
func main() { // {{{
	if len(os.Args) < 2 {
		os.Exit(help())
	}

	if v, ok := cmds[os.Args[1]]; ok {
		if v.hand == nil {
			os.Exit(help())
		} else {
			os.Exit(v.hand())
		}
	}

	os.Exit(help())
}

// }}}
