package main

import (
	"fmt"

	"github.com/lgmamaniap/leet-code-practice/easy-level-golang/20/stack"
)

func isValid(s string) bool {
	var customStack stack.Stack[rune]
	for _, char := range s {
		switch char {
		case '(', '[', '{':
			customStack.Push(char)
		case ')':
			if top, ok := customStack.Pop(); !ok || top != '(' {
				return false
			}
		case ']':
			if top, ok := customStack.Pop(); !ok || top != '[' {
				return false
			}
		case '}':
			if top, ok := customStack.Pop(); !ok || top != '{' {
				return false
			}
		default:
			return false
		}
	}
	return customStack.IsEmpty()
}

func main() {
	fmt.Println(isValid("()"))
	fmt.Println(isValid("()[]{}"))
	fmt.Println(isValid("(]"))
	fmt.Println(isValid("([])"))
}
