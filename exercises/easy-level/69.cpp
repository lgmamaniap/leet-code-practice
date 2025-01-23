// 69. Sqrt(x)

#include <iostream>

using namespace std;

int mySqrt(int x) {
    long long i = 1;

    while(i * i <= x) i++;

    int resp = i - 1;
    return resp;
}

int main()
{
  cout << mySqrt(4) << endl;
  cout << mySqrt(8) << endl;
  return 0;
}

/*
Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.


Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
*/
