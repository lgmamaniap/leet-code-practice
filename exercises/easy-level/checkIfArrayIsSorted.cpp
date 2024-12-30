// 1752. Check if Array Is Sorted and Rotated

#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums) {
  if (nums.size() == 1) return true;
  int counter = 0;

  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] > nums[i + 1]) counter++;
  }
  if (nums[nums.size() -1] > nums[0]) counter++;

  return counter < 2;
}

int main() {
	vector<int> test1, test2, test3;
  test1 = {3,4,5,1,2};
  test2 = {2,1,3,4};
  test3 = {1,2,3};

  cout << check(test1) << endl;
  cout << check(test2) << endl;
  cout << check(test3) << endl;
  return 0;
}

/*
 Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 */
