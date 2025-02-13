package main
 
import (
    "fmt"
)
 
func main() {

	var n int
	fmt.Scanln(&n)
	i := 1
	for n != 0 {
		var num, k int
		fmt.Scanln(&num, &k)
		fmt.Printf("Case %d: %d\n", i, josephus(num, k))
		n--
		i++
	}
}

func josephus(num int, k int) int {
	if num == 1 {
		return 1
	}

	return (josephus(num-1, k) + k - 1) % num + 1
}
