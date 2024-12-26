package main
 
import (
    "fmt"
)
 
func main() {

	var n int
	fmt.Scanln(&n)
    
	var p1, p2, p3 int

	p3 = n % 60
	n /= 60
	p2 = n % 60
	n /= 60
	p1 = n % 60

	fmt.Printf("%d:%d:%d\n", p1, p2, p3)

}
