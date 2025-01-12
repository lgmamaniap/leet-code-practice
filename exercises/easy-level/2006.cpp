// 2006. Count Number of Pairs With Absolute Difference K

#include <iostream>
#include <vector>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(nums[i]-nums[j])==k)
               count++;
        }
    }
    return count;
    
}

int main()
{
  vector<int> test1 = {1,2,2,1};
  vector<int> test2 = {1,3};
  vector<int> test3 = {3,2,1,5,4};
  
  cout << countKDifference(test1, 1) << endl;
  cout << countKDifference(test2, 3) << endl;
  cout << countKDifference(test3, 2) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,2,2,1], k = 1
Output: 4
Explanation: The pairs with an absolute difference of 1 are:
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
Example 2:

Input: nums = [1,3], k = 3
Output: 0
Explanation: There are no pairs with an absolute difference of 3.
Example 3:

Input: nums = [3,2,1,5,4], k = 2
Output: 3
Explanation: The pairs with an absolute difference of 2 are:
- [3,2,1,5,4]
- [3,2,1,5,4]
- [3,2,1,5,4]
 

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100
1 <= k <= 99
 * */
