package main

import (
	"fmt"
	"math"
)

func largestPrimeFactor(x int64) int64 {
	var largePrime int64 = 1
	for x%2 == 0 {
		largePrime = 2
		x /= 2
	}
	for i := int64(3); i <= int64(math.Sqrt(float64(x))); i += 2 {
		for x%i == 0 {
			largePrime = i
			x /= i
		}
	}
	if x > 2 {
		largePrime = x
	}

	return largePrime
}

func main() {
	x := int64(600851475143)
	fmt.Println(largestPrimeFactor(x))
}
