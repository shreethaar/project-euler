package main

import (
    "fmt"
    "math/big"
)

func calculateNFactorial(n int) *big.Int {
    if n==0 || n==1 {
        return big.NewInt(1)
    }
    result:=big.NewInt(int64(n))
    return result.Mul(result,calculateNFactorial(n-1))
}


func storeDigits(fact *big.Int) []int {
    digits:=[]int{}
    factStr:=fact.String()
    for _,ch:=range factStr {
        digits=append(digits,int(ch-'0'))
    }
    return digits
}

func sumDigitsArray(factArray []int) int {
    sum:=0
    for _,digit:=range factArray {
        sum+=digit 
    }
    return sum 
}

func main() {
    x:=100
    fact:=calculateNFactorial(x)
    factArray:=storeDigits(fact)
    sum:=sumDigitsArray(factArray)
    fmt.Println(sum)
}

