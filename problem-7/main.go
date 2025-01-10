package main

import (
    "fmt"
    "math"
)

func main() {
    count := 6
    currentNumber := 14
    lastPrime := 0
    
    for count != 10001 {
        isPrime := true
        sqrtNum := int(math.Sqrt(float64(currentNumber)))
        
        for i := 2; i <= sqrtNum; i++ {
            if currentNumber%i == 0 {
                isPrime = false
                break
            }
        }
        
        if isPrime {
            count++
            lastPrime = currentNumber
        }
        currentNumber++
    }
    
    fmt.Printf("The 10001st prime number is: %d\n", lastPrime)
}
