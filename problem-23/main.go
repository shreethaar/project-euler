package main

import (
    "fmt"
)


func isAbundant(n int) bool {
    if n<=0 {
        return false
    }
    sum:=0
    for i:=1;i<=n/2;i++ {
        if n%i==0{
            sum+=i
        }
    }
    return sum>n 
}


func generateAbundantNumbers(limit int) []int {
    var abundantNumbers []int
    for i:=12;i<=limit;i++ {
        if isAbundant(i) {
            abundantNumbers=append(abundantNumbers,i)
        }
    }
    return abundantNumbers
}


func main() {
    limit:=28123
    abundantNumbers:=generateAbundantNumbers(limit)
    canBeExpressed:=make(map[int]bool) 
    for i:=0;i<len(abundantNumbers);i++ {
        for j:=i;j<len(abundantNumbers);j++ {
            sum:=abundantNumbers[i] + abundantNumbers[j]
            if sum<=limit {
                canBeExpressed[sum]=true
            }
        }

    }

    var nonExpressibleNumbers []int
    total:=0


    for i:=1;i<=limit;i++ {
        if !canBeExpressed[i] {
            nonExpressibleNumbers=append(nonExpressibleNumbers,i)
            total+=i 
        }
    }
    fmt.Printf("Numbers that cannot be expressed as the sum of two abundant numbers: %v\n", nonExpressibleNumbers)
	fmt.Printf("Total count: %d\n", len(nonExpressibleNumbers))
	fmt.Printf("Sum of all numbers that cannot be expressed as the sum of two abundant numbers: %d\n", total)
}
