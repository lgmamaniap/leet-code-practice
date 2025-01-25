// 1748. Sum of Unique Elements
#include <iostream>
#include <vector>

using namespace std;

int sumOfUnique(vector<int> &nums)
{
  int acc[105] = {};
  for (int i = 0; i < nums.size(); i++)
    acc[nums[i]]++;

  int sum = 0;
  for (int i = 1; i <= 100; i++)
    if (acc[i] == 1) sum += i;

  return sum;
}

int main()
{
  vector<int> test1, test2, test3;
  test1 = {1, 2, 3, 2};
  test2 = {1, 1, 1, 1, 1};
  test3 = {1, 2, 3, 4, 5};

  cout << sumOfUnique(test1) << endl;
  cout << sumOfUnique(test2) << endl;
  cout << sumOfUnique(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.

*/