// 1758. Minimum Changes To Make Alternating Binary String

#include <iostream>

using namespace std;

int minOperations(string s) {
        string oneInit = "10", zeroInit = "01";
        int oneCount = 0, zeroCount = 0, aux = 0;
        for (int i = 0; i < s.size(); i++, aux++) {
            if (aux > 1) aux = 0;
            if (s[i] != oneInit[aux]) oneCount++;
            if (s[i] != zeroInit[aux]) zeroCount++;
        }
        return min(oneCount, zeroCount);
    }

int main() {
  cout << minOperations("0100") << endl;
  cout << minOperations("10") << endl;
  cout << minOperations("1111") << endl;
  return 0;
}

/*
 *Example 1:

Input: s = "0100"
Output: 1
Explanation: If you change the last character to '1', s will be "0101", which is alternating.
Example 2:

Input: s = "10"
Output: 0
Explanation: s is already alternating.
Example 3:

Input: s = "1111"
Output: 2
Explanation: You need two operations to reach "0101" or "1010".
 *
 * */
