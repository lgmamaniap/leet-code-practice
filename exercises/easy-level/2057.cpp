// 2057. Smallest Index With Equal Value
#include <iostream>
#include <vector>

using namespace std;

int smallestEqual(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (i%10 == nums[i]) return i;
    }
    return -1;
}

int main()
{
  vector<int> test1, test2, test3;
  test1 = {0,1,2};
  test2 = {4,3,2,1};
  test3 = {1,2,3,4,5,6,7,8,9,0};
  
  cout << smallestEqual(test1) << endl;
  cout << smallestEqual(test2) << endl;
  cout << smallestEqual(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [0,1,2]
Output: 0
Explanation: 
i=0: 0 mod 10 = 0 == nums[0].
i=1: 1 mod 10 = 1 == nums[1].
i=2: 2 mod 10 = 2 == nums[2].
All indices have i mod 10 == nums[i], so we return the smallest index 0.


Example 2:

Input: nums = [4,3,2,1]
Output: 2
Explanation: 
i=0: 0 mod 10 = 0 != nums[0].
i=1: 1 mod 10 = 1 != nums[1].
i=2: 2 mod 10 = 2 == nums[2].
i=3: 3 mod 10 = 3 != nums[3].
2 is the only index which has i mod 10 == nums[i].


Example 3:

Input: nums = [1,2,3,4,5,6,7,8,9,0]
Output: -1
Explanation: No index satisfies i mod 10 == nums[i].
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 9
*/
