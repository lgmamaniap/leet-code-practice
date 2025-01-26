// 191. Number of 1 Bits

#include <iostream>

using namespace std;

int hammingWeight(int n) {
    int count = 0;
    while (n > 0) {
        int bit = n & 1;
        if (bit == 1) count++;
        n = n >> 1;
    }
    return count;
}

int main()
{
  cout << hammingWeight(11) << endl;
  cout << hammingWeight(128) << endl;
  cout << hammingWeight(2147483645) << endl;
  return 0;
}


/*
Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.

Example 3:

Input: n = 2147483645

Output: 30

Explanation:

The input binary string 1111111111111111111111111111101 has a total of thirty set bits.
*/
