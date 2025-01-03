// 1909. Remove One Element to Make the Array Strictly Increasing
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool canBeIncreasing(vector<int>& nums) {
  if (nums.size() == 2) return true;
  
  stack<int> stk;
  int count = 0;
  
  for (int i = 0; i < nums.size(); i++) {
    int last = stk.size() != 0 ? stk.top() : 0;
    if (last < nums[i]) {
      last = nums[i];
      stk.push(nums[i]);
      continue;
    }
    
    int tst1 = stk.top();
    stk.pop();
    int prev = stk.size() != 0
      ? stk.top()
      : 0;
    int next = ((i + 1) > (nums.size() - 1))
      ? INT_MAX
      : nums[i + 1];
    
    bool firstC = prev < tst1 && tst1 < next;
    bool secondC = prev < nums[i] && nums[i] < next;
    
    if (firstC && secondC) {
      stk.push(nums[i]);
      count++;
      if (count > 1) return false;
      continue;
    }
    
    if (firstC) stk.push(tst1);
    else count++;
    
    if (secondC) stk.push(nums[i]);
    else count++;
    
    if (count > 1) return false;
  }
  
  return true;
}

int main()
{
  vector<int> test1 = {1,2,10,5,7};
  vector<int> test2 = {2,3,1,2};
  vector<int> test3 = {1,1,1};
  vector<int> test4 = {1,1};
  vector<int> test5 = {105,924,32,968};
  vector<int> test6 = {13,205,553,527,790,238};
  
  cout << canBeIncreasing(test1) << endl;
  cout << canBeIncreasing(test2) << endl;
  cout << canBeIncreasing(test3) << endl;
  cout << canBeIncreasing(test4) << endl;
  cout << canBeIncreasing(test5) << endl;
  cout << canBeIncreasing(test6) << endl;
  return 0;
}

/*
  Example 1:

  Input: nums = [1,2,10,5,7]
  Output: true
  Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
  [1,2,5,7] is strictly increasing, so return true.
  
  
  Example 2:

  Input: nums = [2,3,1,2]
  Output: false
  Explanation:
  [3,1,2] is the result of removing the element at index 0.
  [2,1,2] is the result of removing the element at index 1.
  [2,3,2] is the result of removing the element at index 2.
  [2,3,1] is the result of removing the element at index 3.
  No resulting array is strictly increasing, so return false.
  
  
  Example 3:

  Input: nums = [1,1,1]
  Output: false
  Explanation: The result of removing any element is [1,1].
  [1,1] is not strictly increasing, so return false.
 * */
