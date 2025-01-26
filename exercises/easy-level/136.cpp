// 136. Single Number
#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int res = 0;

    for (int n : nums) {
        res = res ^ n;
    }
    return res;
}

int main()
{
  vector<int> test1, test2, test3;
  test1 = {2,2,1};
  test2 = {4,1,2,1,2};
  test3 = {1};
  
  cout << singleNumber(test1) << endl;
  cout << singleNumber(test2) << endl;
  cout << singleNumber(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [2,2,1]

Output: 1


Example 2:

Input: nums = [4,1,2,1,2]

Output: 4


Example 3:

Input: nums = [1]

Output: 1

 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/
