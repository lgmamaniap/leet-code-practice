// 1979. Find Greatest Common Divisor of Array

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(vector<int>& nums) {
    int min = INT_MAX, max = 0;
    for (int i : nums) {
        if (i < min) min = i;
        if (i > max) max = i;
    }
    return gcd(min, max);
}

int main()
{
  vector<int> test1 = {2,5,6,9,10};
  vector<int> test2 = {7,5,6,8,3};
  vector<int> test3 = {3,3};
  
  cout << findGCD(test1) << endl;
  cout << findGCD(test2) << endl;
  cout << findGCD(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
Example 2:

Input: nums = [7,5,6,8,3]
Output: 1
Explanation:
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.
Example 3:

Input: nums = [3,3]
Output: 3
Explanation:
The smallest number in nums is 3.
The largest number in nums is 3.
The greatest common divisor of 3 and 3 is 3.
 

Constraints:

2 <= nums.length <= 1000
1 <= nums[i] <= 1000

*/
