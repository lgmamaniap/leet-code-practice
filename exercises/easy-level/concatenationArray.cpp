// 1929. Concatenation of Array

#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
  vector<int> response(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    response.push_back(nums[i]);
  }
  return response;
}

int main()
{
  vector<int> test1, test2;
  test1 = {1,2,1};
  test2 = {1,3,2,1};
  getConcatenation(test1);
  getConcatenation(test2);
  return 0;
}

/*
Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]


Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]

*/
