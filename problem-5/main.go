package main

import "fmt"

func gcd(a, b int) int {
    for b != 0 {
        temp := b
        b = a % b
        a = temp
    }
    return a
}

func lcm(a int64, b int) int64 {
    return (a * int64(b)) / int64(gcd(int(a), b))
}

func main() {
    var result int64 = 1
    for i := 1; i <= 20; i++ {
        result = lcm(result, i)
    }
    fmt.Println(result)
}
