// 283. Move Zeroes
#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums)
{
  int zeros = 0;
  vector<int> resp;
  for (int i : nums)
  {
    if (i == 0)
      zeros++;
    else
      resp.push_back(i);
  }

  for (int i = 0; i < zeros; i++)
  {
    resp.push_back(0);
  }

  nums = resp;
}

void printVector(vector<int> &nums) {
  cout << "[ ";
  for (int i : nums)
    cout << i << " ";
  cout << "]" << endl;
}

int main()
{
  vector<int> test;
  test = {0,1,0,3,12};
  moveZeroes(test);
  printVector(test);

  test = {0};
  moveZeroes(test);
  printVector(test);
  
  return 0;
}

/*
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


Example 2:
Input: nums = [0]
Output: [0]


Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
*/