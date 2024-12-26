package main
 
import (
    "fmt"
)
 
func main() {

   var n1, n2, n3 float32
    fmt.Scanln(&n1)
    fmt.Scanln(&n2)
    fmt.Scanln(&n3)
    
    fmt.Printf("MEDIA = %.1f\n", ((n1*2)+(n2*3)+(n3*5)) / 10)

}
