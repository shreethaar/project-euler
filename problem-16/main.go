package main

import (
    "fmt"
    "math/big"
)

func extractDigit(powDigit *big.Int) []int {
    temp:=new(big.Int).Set(powDigit)
    ten:=big.NewInt(10)
    zero:=big.NewInt(0)
    remainder:=new(big.Int)
    var digits []int
    for temp.Cmp(zero)>0{
        temp.DivMod(temp,ten,remainder)
        digits=append(digits,int(remainder.Int64()))
    }
    return digits
}

func sumDigit(arrayStoreDigit []int) int {
    sum:=0
    for _,digit:=range arrayStoreDigit {
        sum+=digit
    }
    return sum
}

func main() {
    powDigit:=new(big.Int)
    two:=big.NewInt(2)
    powDigit.Exp(two,big.NewInt(1000),nil)
    digits:=extractDigit(powDigit)
    result:=sumDigit(digits)
    fmt.Printf("Sum:%d\n",result)
}

