// 1941. Check if All Characters Have Equal Number of Occurrences

#include <iostream>

using namespace std;

bool areOccurrencesEqual(string s) {
  int acc[125] = {};
  int max = s[0];

  for (int i: s) {
      acc[i]++;
  }

  for (int i = 97; i < 125; i++) {
      if (acc[i] != 0 && acc[i] != acc[max])
          return false;
  }

  return true;
}

int main()
{
  cout << areOccurrencesEqual("abacbc") << endl;
  cout << areOccurrencesEqual("aaabb") << endl;
  return 0;
}

/*
Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.


Example 2:

Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

*/
