// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0, j = 1;
    while(j < nums.size()) {
        if (nums[i] < nums[j]) {
            i++;
            swap(nums[i], nums[j]);
        }
        j++;
    }

    return i + 1;
}

int main()
{
  vector<int> test1, test2;
  test1 = {1,1,2};
  test2 = {0,0,1,1,1,2,2,3,3,4};
  
  cout << removeDuplicates(test1) << endl;
  cout << removeDuplicates(test2) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.
*/
