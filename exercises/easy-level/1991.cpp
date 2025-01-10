// 1991. Find the Middle Index in Array

#include <iostream>
#include <vector>

using namespace std;

int findMiddleIndex(vector<int>& nums) {
    int inc = 0, dec = 0;

    for (int i = 0; i < nums.size(); i++)
        dec += nums[i];

    for (int i = 0; i < nums.size(); i++) {
        dec -= nums[i];

        if (inc == dec) return i;

        inc += nums[i];
    }

    return -1;
}

int main()
{
  vector<int> test1 = {2,3,-1,8,4};
  vector<int> test2 = {1,-1,4};
  vector<int> test3 = {2,5};
  
  cout << findMiddleIndex(test1) << endl;
  cout << findMiddleIndex(test2) << endl;
  cout << findMiddleIndex(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4
Example 2:

Input: nums = [1,-1,4]
Output: 2
Explanation: The sum of the numbers before index 2 is: 1 + -1 = 0
The sum of the numbers after index 2 is: 0
Example 3:

Input: nums = [2,5]
Output: -1
Explanation: There is no valid middleIndex.
 

Constraints:

1 <= nums.length <= 100
-1000 <= nums[i] <= 1000
 */
