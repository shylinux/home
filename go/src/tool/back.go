package main

import (
	"crypto/md5"
	"encoding/hex"
	"flag"
	"fmt"
	"io"
	"io/ioutil"
	"os"
)

var (
	srcPath = flag.String("src", "./", "source path")
	dstPath = flag.String("dst", "./", "destination path")
	dstHash = flag.String("hash", "hash", "destination path hash")
)

func show(hash *os.File, base string, path string) {
	err := os.Chdir(path)
	if err != nil {
		os.Exit(1)
	}

	cwd, _ := os.Getwd()
	if len(base) == 0 {
		base = cwd
		cwd = ""
	} else {
		cwd = cwd[len(base)+1:] + "/"
	}

	list, _ := ioutil.ReadDir("./")
	for _, v := range list {
		if v.IsDir() {
			if v.Name() != "." && v.Name() != ".." {
				show(hash, base, v.Name())
			}
			continue
		}

		f, _ := os.Open(v.Name())
		h := md5.New()
		io.Copy(h, f)
		b := h.Sum(nil)
		fmt.Fprintf(hash, "%d %s %s%s\n", v.ModTime().Unix(), hex.EncodeToString(b), cwd, v.Name())

	}

	err = os.Chdir("../")
	if err != nil {
		os.Exit(1)
	}
}

func main() {
	flag.Parse()
	flag.VisitAll(func(f *flag.Flag) {
		fmt.Printf("%s %v\n", f.Name, f.Value)
	})

	f, _ := os.Create(*dstPath + *dstHash)
	show(f, "", *srcPath)
	f.Close()

	println("hello go world!")
}
