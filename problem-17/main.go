package main

import (
	"fmt"
	"strings"
)

func numberToWords(number int) string {
	ones := map[int]string{
		1: "one",
		2: "two",
		3: "three",
		4: "four",
		5: "five",
		6: "six",
		7: "seven",
		8: "eight",
		9: "nine",
	}
	teens := map[int]string{
		10: "ten",
		11: "eleven",
		12: "twelve",
		13: "thirteen",
		14: "fourteen",
		15: "fifteen",
		16: "sixteen",
		17: "seventeen",
		18: "eighteen",
		19: "nineteen",
	}
	tens := map[int]string{
		20: "twenty",
		30: "thirty",
		40: "forty",
		50: "fifty",
		60: "sixty",
		70: "seventy",
		80: "eighty",
		90: "ninety",
	}
	if number == 1000 {
		return "onethousand"
	}

	var word strings.Builder
	hundreds := number / 100
	remainder := number % 100
	if hundreds > 0 {
		word.WriteString(ones[hundreds])
		word.WriteString("hundred")
		if remainder > 0 {
			word.WriteString("and")
		}
	}
	if remainder > 0 {
		if remainder < 10 {
			word.WriteString(ones[remainder])
		} else if remainder >= 10 && remainder < 20 {
			word.WriteString(teens[remainder])
		} else {
			tensPart := (remainder / 10) * 10
			onesPart := remainder % 10
			word.WriteString(tens[tensPart])
			if onesPart > 0 {
				word.WriteString(ones[onesPart])
			}
		}
	}
	return word.String()
}

func main() {
	totalLetters := 0
	for number := 1; number <= 1000; number++ {
		word := numberToWords(number)
		totalLetters += len(word)
	}
	fmt.Printf("Total letters used: %d\n", totalLetters)
}
