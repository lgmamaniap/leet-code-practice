// 2027. Minimum Moves to Convert String

#include <iostream>

using namespace std;

int minimumMoves(string s) {
    int i = 0, count = 0;

    while(i < s.size()) {
        if (s[i] == 'X') {
            count++;
            i += 3;
        } else {
            i++;
        }
    }
    return count;
}

int main()
{
  cout << minimumMoves("XXX") << endl;
  cout << minimumMoves("XXOX") << endl;
  cout << minimumMoves("OOOO") << endl;
  return 0;
}


/*
Example 1:

Input: s = "XXX"
Output: 1
Explanation: XXX -> OOO
We select all the 3 characters and convert them in one move.
Example 2:

Input: s = "XXOX"
Output: 2
Explanation: XXOX -> OOOX -> OOOO
We select the first 3 characters in the first move, and convert them to 'O'.
Then we select the last 3 characters and convert them so that the final string contains all 'O's.
Example 3:

Input: s = "OOOO"
Output: 0
Explanation: There are no 'X's in s to convert.
 

Constraints:

3 <= s.length <= 1000
s[i] is either 'X' or 'O'.

*/
