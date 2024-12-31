// 1800. Maximum Ascending Subarray Sum
#include <iostream>
#include <vector>

using namespace std;

int recursiveSum(vector<int>& nums, int idx) {
  int sum = 0, max = 0;
  for (int i = idx; i < nums.size(); i++) {
    if (max < nums[i]) {
      sum += nums[i];
      max = nums[i];
    }
    else {
      int auxSum = recursiveSum(nums, i);
      return sum > auxSum ? sum : auxSum;
    }
  }
  return sum;
}

int maxAscendingSum(vector<int>& nums) {
    return recursiveSum(nums, 0);
}

int main()
{
  vector<int> test1 = {10,20,30,5,10,50};
  vector<int> test2 = {10,20,30,40,50};
  vector<int> test3 = {12,17,15,13,10,11,12};
  vector<int> test4 = {3,6,10,1,8,9,9,8,9};
  
  cout << maxAscendingSum(test1) << endl;
  cout << maxAscendingSum(test2) << endl;
  cout << maxAscendingSum(test3) << endl;
  cout << maxAscendingSum(test4) << endl;
  return 0;
}

/*
  Example 1:

  Input: nums = [10,20,30,5,10,50]
  Output: 65
  Explanation: [5,10,50] is the ascending subarray with the maximum sum of 65.
  Example 2:

  Input: nums = [10,20,30,40,50]
  Output: 150
  Explanation: [10,20,30,40,50] is the ascending subarray with the maximum sum of 150.
  Example 3:

  Input: nums = [12,17,15,13,10,11,12]
  Output: 33
  Explanation: [10,11,12] is the ascending subarray with the maximum sum of 33.
 */
