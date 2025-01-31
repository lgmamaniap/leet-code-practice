// 263. Ugly Number

#include <iostream>

using namespace std;

bool isUgly(int n)
{
  if (n <= 0)
    return false;

  while (n > 1)
  {
    if (n % 2 == 0)
      n = n / 2;
    else if (n % 3 == 0)
      n = n / 3;
    else if (n % 5 == 0)
      n = n / 5;
    else
      break;
  }

  return n == 1;
}

int main()
{
  cout << isUgly(6) << endl;
  cout << isUgly(1) << endl;
  cout << isUgly(14) << endl;
  return 0;
}

/*
Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3


Example 2:
Input: n = 1
Output: true
Explanation: 1 has no prime factors.


Example 3:
Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.


Constraints:

-231 <= n <= 231 - 1
*/