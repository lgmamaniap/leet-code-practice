// 2016. Maximum Difference Between Increasing Elements
#include <iostream>
#include <vector>

using namespace std;

int maximumDifference(vector<int>& nums) {
  int minValue = nums[0];
  int maxDifference = -1;

  for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > minValue) {
          maxDifference = max(maxDifference, nums[i] - minValue);
      } else {
          minValue = nums[i];
      }
  }

  return maxDifference;
}

int main()
{
  vector<int> test1, test2, test3;
  
  test1 = {7,1,5,4};
  test2 = {9,4,3,2};
  test1 = {1,5,2,10};
  
  cout << maximumDifference(test1) << endl;
  cout << maximumDifference(test2) << endl;
  cout << maximumDifference(test3) << endl;
  
  return 0;
}

/*
Example 1:

Input: nums = [7,1,5,4]
Output: 4
Explanation:
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.
Example 2:

Input: nums = [9,4,3,2]
Output: -1
Explanation:
There is no i and j such that i < j and nums[i] < nums[j].
Example 3:

Input: nums = [1,5,2,10]
Output: 9
Explanation:
The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.
 

Constraints:

n == nums.length
2 <= n <= 1000
1 <= nums[i] <= 109
 */
