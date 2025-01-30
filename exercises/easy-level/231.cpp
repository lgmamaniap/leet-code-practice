// 231. Power of Two

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
  int count = 0;

  while (n > 0)
  {
    int mask = n & 1;
    if (mask == 1)
    {
      count++;
    }
    if (count > 1)
      return false;

    n = n >> 1;
  }

  return count == 1;
}

int main()
{
  cout << isPowerOfTwo(1) << endl;
  cout << isPowerOfTwo(16) << endl;
  cout << isPowerOfTwo(3) << endl;
  return 0;
}

/*
Example 1:
Input: n = 1
Output: true
Explanation: 20 = 1


Example 2:
Input: n = 16
Output: true
Explanation: 24 = 16


Example 3:
Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1
*/