package main

import "fmt"

func removeDuplicates(nums []int) int {
	response := 0
	if len(nums) == 0 {
		return response
	}
	// It's necessary to modify the original nums array
	index := 0
	iterator := nums[0]
	counter := 0

	for _, num := range nums {
		if num == iterator {
			counter++
		} else {
			counter = 1
			iterator = num
		}

		if counter > 2 {
			continue
		}

		nums[index] = iterator
		index++
	}

	return index
}

func main() {
	nums := []int{1, 1, 1, 2, 2, 3}
	newLength := removeDuplicates(nums)
	fmt.Println(newLength, nums[:newLength])
}
