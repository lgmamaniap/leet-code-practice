// 258. Add Digits

#include <iostream>

using namespace std;

int sumDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}

int addDigits(int num)
{
  if (num < 10)
    return num;

  int n = num;

  while (n > 9)
  {
    n = sumDigits(n);
  }

  return n;
}

int main()
{
  cout << addDigits(38) << endl;
  cout << addDigits(0) << endl;
  return 0;
}

/*
Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.


Example 2:

Input: num = 0
Output: 0


Constraints:

0 <= num <= 231 - 1
*/