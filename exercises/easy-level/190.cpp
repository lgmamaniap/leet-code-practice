// 190. Reverse Bits

#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t resp = 0;

    for (int i = 0; i < 32; i++) {
        int bit = n & 1;
        resp = (resp << 1) | bit;
        n = n >> 1;
    }

    return resp;
}

int main()
{
  cout << reverseBits(43261596) << endl;
  cout << reverseBits(4294967293) << endl;
  return 0;
}


/*
Example 1:

Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.



Example 2:

Input: n = 11111111111111111111111111111101
Output:   3221225471 (10111111111111111111111111111111)
Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.
 

Constraints:

The input must be a binary string of length 32
*/
