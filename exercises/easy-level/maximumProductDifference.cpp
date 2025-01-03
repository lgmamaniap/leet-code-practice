// 1913. Maximum Product Difference Between Two Pairs

#include <iostream>
#include <vector>

using namespace std;

int maxProductDifference(vector<int>& nums) {
    int aux[10005] = {};
    vector<int> mins;
    vector<int> maxs;
    int minN = INT_MAX, maxN = INT_MIN, minC = 0, maxC = 0;
    
    for (int i = 0; i < nums.size(); i++) {
      aux[nums[i]]++;
      
      if (minN > nums[i]) minN = nums[i];
      
      if (maxN < nums[i]) maxN = nums[i];
    }
    
    while(minN < 10005 && minC < 2) {
      int loops = aux[minN] != 0 ? aux[minN] : 0;
      
      for (int j = 0; j < loops; j++) {
        mins.push_back(minN);
        minC++;
        
        if (minC > 1) break;
      }
      minN++;
    }
    
    while(maxN > 0 && maxC < 2) {
      int loops = aux[maxN] != 0 ? aux[maxN] : 0;
      
      for (int j = 0; j < loops; j++) {
        maxs.push_back(maxN);
        maxC++;
        
        if (maxC > 1) break;
      }
      maxN--;
    }
    
    return (maxs[0] * maxs[1]) - (mins[0] * mins[1]);
}

int main()
{
  vector<int> test1 = {5,6,2,7,4};
  vector<int> test2 = {4,2,5,9,7,4,8};
  vector<int> test3 = {1,1,1,1};
  
  cout << maxProductDifference(test1) << endl;
  cout << maxProductDifference(test2) << endl;
  cout << maxProductDifference(test3) << endl;
  return 0;
}


/*
Example 1:

Input: nums = [5,6,2,7,4]
Output: 34
Explanation: We can choose indices 1 and 3 for the first pair (6, 7) and indices 2 and 4 for the second pair (2, 4).
The product difference is (6 * 7) - (2 * 4) = 34.


Example 2:

Input: nums = [4,2,5,9,7,4,8]
Output: 64
Explanation: We can choose indices 3 and 6 for the first pair (9, 8) and indices 1 and 5 for the second pair (2, 4).
The product difference is (9 * 8) - (2 * 4) = 64.
 */
