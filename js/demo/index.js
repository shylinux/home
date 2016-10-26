#!/usr/bin/env node

require("http").createServer(function(req, res) {
	res.end("hello node world!\n")
}).listen(9090)
