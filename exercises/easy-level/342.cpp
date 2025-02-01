// 342. Power of Four

#include <iostream>

using namespace std;

bool isPowerOfFour(int n)
{
  if (n < 1)
    return false;

  long long aux = 1;

  while (aux <= n)
  {
    if (aux == n)
      return true;
    aux = aux * 4;
  }

  return false;
}

int main()
{
  cout << isPowerOfFour(10) << endl;
  cout << isPowerOfFour(5) << endl;
  cout << isPowerOfFour(1) << endl;
  return 0;
}

/*
Example 1:
Input: n = 16
Output: true


Example 2:
Input: n = 5
Output: false


Example 3:
Input: n = 1
Output: true


Constraints:

-231 <= n <= 231 - 1
*/