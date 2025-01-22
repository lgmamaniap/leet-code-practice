// 35. Search Insert Position
#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    if (nums.size() == 1)
        return target <= nums[0] ? 0 : 1;

    int i = 0;
    while(i < nums.size() && nums[i] < target) i++;

    return i;
}

int main()
{
  vector<int> test1, test2, test3;
  test1 = {1,3,5,6};
  test2 = {1,3,5,6};
  test3 = {1,3,5,6};
  
  cout << searchInsert(test1, 5) << endl;
  cout << searchInsert(test2, 2) << endl;
  cout << searchInsert(test3, 7) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2


Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1


Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/
