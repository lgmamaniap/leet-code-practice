package main

import (
	"fmt"
	"strings"
)

func longestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}
	shortStr := strs[0]
	for _, st := range strs {
		if len(st) < len(shortStr) {
			shortStr = st
		}
	}

	count := 0
	for count < len(strs) && len(shortStr) > 0 {
		if !strings.HasPrefix(strs[count], shortStr) {
			shortStr = shortStr[:len(shortStr)-1]
			continue
		}
		count++
	}

	return shortStr
}

func main() {
	fmt.Println(longestCommonPrefix([]string{"flower", "flow", "flight"}))
	fmt.Println(longestCommonPrefix([]string{"dog", "racecar", "car"}))
}
