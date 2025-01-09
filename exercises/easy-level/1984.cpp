// 1984. Minimum Difference Between Highest and Lowest of K Scores

#include <iostream>
#include <vector>

using namespace std;

int minimumDifference(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int l = 0;
    int r = k - 1;

    int minDiff = INT_MAX;
    
    while(r < nums.size()) {
        minDiff = min(minDiff, (nums[r] - nums[l]));
        l++;
        r++;
    }

    return minDiff;
}

int main()
{
  vector<int> test1 = {90};
  vector<int> test2 = {9,4,1,7};
  
  cout << minimumDifference(test1, 1) << endl;
  cout << minimumDifference(test2, 2) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [90], k = 1
Output: 0
Explanation: There is one way to pick score(s) of one student:
- [90]. The difference between the highest and lowest score is 90 - 90 = 0.
The minimum possible difference is 0.
Example 2:

Input: nums = [9,4,1,7], k = 2
Output: 2
Explanation: There are six ways to pick score(s) of two students:
- [9,4,1,7]. The difference between the highest and lowest score is 9 - 4 = 5.
- [9,4,1,7]. The difference between the highest and lowest score is 9 - 1 = 8.
- [9,4,1,7]. The difference between the highest and lowest score is 9 - 7 = 2.
- [9,4,1,7]. The difference between the highest and lowest score is 4 - 1 = 3.
- [9,4,1,7]. The difference between the highest and lowest score is 7 - 4 = 3.
- [9,4,1,7]. The difference between the highest and lowest score is 7 - 1 = 6.
The minimum possible difference is 2.
 

Constraints:

1 <= k <= nums.length <= 1000
0 <= nums[i] <= 105
*/
