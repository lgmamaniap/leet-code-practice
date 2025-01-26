// 217. Contains Duplicate
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> m;

    for(int i : nums) {
        m[i]++;
        if (m[i] > 1) return true;
    }

    return false;
}

int main()
{
  vector<int> test1 = {1,2,3,1};
  cout << containsDuplicate(test1) << endl;
  
  test1 = {1,2,3,4};
  cout << containsDuplicate(test1) << endl;
  
  test1 = {1,1,1,3,3,4,3,2,4,2};
  cout << containsDuplicate(test1) << endl;
  
  return 0;
}


/*
Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true

 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
