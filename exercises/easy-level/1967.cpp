// 1967. Number of Strings That Appear as Substrings in Word

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int count = 0;
    for (string p: patterns)
      if (word.find(p) != string::npos) count++;
    return count;
}

int main()
{
  vector<string> test1 = {"a","abc","bc","d"};
  vector<string> test2 = {"a","b","c"};
  vector<string> test3 = {"a","a","a"};
  
  for(int i = 0; i < 3; i++) {
    string inp;
    cin >> inp;
    cout << numOfStrings(test1, inp) << endl;
  }
  return 0;
}

/*
Example 1:

Input: patterns = ["a","abc","bc","d"], word = "abc"
Output: 3
Explanation:
- "a" appears as a substring in "abc".
- "abc" appears as a substring in "abc".
- "bc" appears as a substring in "abc".
- "d" does not appear as a substring in "abc".
3 of the strings in patterns appear as a substring in word.


Example 2:

Input: patterns = ["a","b","c"], word = "aaaaabbbbb"
Output: 2
Explanation:
- "a" appears as a substring in "aaaaabbbbb".
- "b" appears as a substring in "aaaaabbbbb".
- "c" does not appear as a substring in "aaaaabbbbb".
2 of the strings in patterns appear as a substring in word.


Example 3:

Input: patterns = ["a","a","a"], word = "ab"
Output: 3
Explanation: Each of the patterns appears as a substring in word "ab".
 

Constraints:

1 <= patterns.length <= 100
1 <= patterns[i].length <= 100
1 <= word.length <= 100
patterns[i] and word consist of lowercase English letters.
*/
