package main
import "fmt"

func main() {
    a,b:=1,2
    sum:=0
    for a<4000000 {
        if a%2==0 {
            sum+=a
        }
        a,b=b,a+b
    }
    fmt.Println(sum)
}

