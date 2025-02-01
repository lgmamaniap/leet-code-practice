// 326. Power of Three

#include <iostream>

using namespace std;

bool isPowerOfThree(int n)
{
  if (n < 0)
    return false;

  long long aux = 1;

  while (aux <= n)
  {
    if (aux == n)
      return true;
    aux = aux * 3;
  }

  return false;
}

int main()
{
  cout << isPowerOfThree(27) << endl;
  cout << isPowerOfThree(0) << endl;
  cout << isPowerOfThree(-1) << endl;
  return 0;
}

/*
Example 1:
Input: n = 27
Output: true
Explanation: 27 = 33


Example 2:
Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.


Example 3:
Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).


Constraints:

-231 <= n <= 231 - 1
*/