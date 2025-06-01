package main

import "fmt"

func twoSum(nums []int, target int) []int {
	aux := map[int]int{}
	for index, num := range nums {
		if val, ok := aux[target-num]; ok {
			return []int{val, index}
		}
		aux[num] = index
	}
	return nil
}

func main() {
	fmt.Println(twoSum([]int{2, 7, 11, 15}, 9))
}
