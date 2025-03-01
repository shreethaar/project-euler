package main

import (
    "fmt"

)

func factorial(n int) int {
    if n<=1{
        return 1 
    }
    return n*factorial(n-1)
}


func findPermutation(digits []int, n int) []int {
    length:=len(digits) 
    result:=make([]int, length)
    remaining:=make([]int,length)
    copy(remaining,digits)
    n--

    for i:=0;i<length;i++{
        fact:=factorial(length-i-1)
        index:=n/fact
        result[i]=remaining[index]
        remaining=append(remaining[:index],remaining[index+1:]...)
        n%=fact
    }
    return result
}



func main() {
    digits:=[]int{0,1,2,3,4,5,6,7,8,9}
    millionthPerm:=findPermutation(digits,1000000)
    fmt.Print("The millionth lexicographic permutation is: ")
    for _,digit:=range millionthPerm {
        fmt.Print(digit) 
    }
    fmt.Println()
}

