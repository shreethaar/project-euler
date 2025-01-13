package main

import (
	"fmt"
)

func factorial(n int) uint64 {
	result := uint64(1)
	for i := 2; i <= n; i++ {
		result *= uint64(i)
	}
	return result
}

func calculateRoutes(gridSize int) uint64 {
	totalMoves := 2 * gridSize
	numerator := factorial(totalMoves)
	denominator := factorial(gridSize) * factorial(gridSize)
	return numerator / denominator
}

func main() {
	gridSize := 20
	fmt.Printf("Number of routes through a %dx%d grid: %d\n", gridSize, gridSize, calculateRoutes(gridSize))
}
