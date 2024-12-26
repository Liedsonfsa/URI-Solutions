package main
 
import (
    "fmt"
)
 
func main() {

    var n1, n2 float32
    fmt.Scanln(&n1)
    fmt.Scanln(&n2)
    
    fmt.Printf("MEDIA = %.5f\n", ((n1*3.5)+(n2*7.5)) / 11)

}
