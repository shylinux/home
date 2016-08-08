function f1() {
	var a =10
	var f2 = function() {
		a = 15
		return a
	}
	a = 20
	return f2
}
f = f1()
console.log(f())
