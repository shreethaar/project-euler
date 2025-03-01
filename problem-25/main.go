package main

import (
    "fmt"
    "math/big"
)

func countDigits(n *big.Int) int {
    return len(n.String())
}

func findFibonacciWithDigits(digitCount int) (int, *big.Int) {
    a:=big.NewInt(1)
    b:=big.NewInt(1)
    index:=2
    for countDigits(b) < digitCount {
        temp:=new(big.Int).Add(a,b)
        a=b 
        b=temp
        index++
    }

    return index,b 
}

func main() {
    targetDigits:=1000
    index,fibNumber:=findFibonacciWithDigits(targetDigits)
    fmt.Printf("The index of the first Fibonacci number to contain %d digits is: %d\n", targetDigits, index)
	fmt.Printf("This Fibonacci number has exactly %d digits\n", countDigits(fibNumber))
	numStr := fibNumber.String()
	if len(numStr) > 20 {
		fmt.Printf("The number begins with: %s... and ends with: ...%s\n", 
			numStr[:10], numStr[len(numStr)-10:])
	} else {
		fmt.Printf("The number is: %s\n", numStr)
	}
}
