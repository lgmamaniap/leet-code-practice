package main

import (
	"fmt"
	"math"
	"strconv"
	"strings"
)

func reverse(x int) int {
	isNegative := false
	if x < 0 {
		if x > -10 {
			return x
		}
		x = -x
		isNegative = true
	}

	if x > 0 && x < 10 {
		return x
	}

	processNumber := func(n string) (int, error) {
		var builder strings.Builder
		runes := []rune(n)

		for i := len(n) - 1; i >= 0; i-- {
			builder.WriteRune(runes[i])
		}

		return strconv.Atoi(builder.String())
	}

	resp, err := processNumber(fmt.Sprint(x))
	if err != nil {
		return 0
	}

	if resp > math.MaxInt32 {
		return 0
	}

	if isNegative {
		return -resp
	}

	return resp
}

func main() {
	fmt.Println(reverse(123))
	fmt.Println(reverse(-123))
	fmt.Println(reverse(120))
}
