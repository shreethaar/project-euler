package main
import "fmt"

func firstObj() int {
    sum := 0
    for i := 1; i <= 100; i++ {
        sum += i * i
    }
    return sum
}

func secondObj() int {
    sum := 0
    for i := 1; i <= 100; i++ {
        sum += i
    }
    return sum * sum
}

func thirdObj(x, y int) {
    diff := x - y
    fmt.Printf("Difference: %d", diff)
}

func main() {
    sumSquare := firstObj()
    squareSum := secondObj()
    thirdObj(squareSum, sumSquare)
}
