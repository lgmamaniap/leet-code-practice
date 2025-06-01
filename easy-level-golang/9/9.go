package main

import "fmt"

func verifyPalindrome(n string) bool {
	i, j := 0, len(n)-1

	for i < j {
		if n[i] != n[j] {
			return false
		}
		i++
		j--
	}
	return true
}

func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	return verifyPalindrome(fmt.Sprint(x))
}

func main() {
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
	fmt.Println(isPalindrome(10))
}
