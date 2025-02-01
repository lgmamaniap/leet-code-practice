// 290. Word Pattern
#include <iostream>
#include <sstream>
#include <map>
#include <unordered_set>

using namespace std;

bool wordPattern(string pattern, string s)
{
  int idx = 0;
  string txt;
  istringstream ss(s);
  map<string, char> m;
  unordered_set<char> cSet;

  string sArr[305];

  while (ss >> txt)
  {
    if (!m.count(txt))
    {
      m[txt] = pattern[idx];
      if (cSet.count(pattern[idx]))
        return false;
      else
        cSet.insert(pattern[idx]);
    }
    sArr[idx] = txt;

    idx++;
  }

  if (pattern.size() != idx)
    return false;

  for (int i = 0; i < idx; i++)
  {
    if (pattern[i] != m[sArr[i]])
      return false;
  }

  return true;
}

int main()
{
  cout << wordPattern("abba", "dog cat cat dog") << endl;
  cout << wordPattern("abba", "dog cat cat fish") << endl;
  cout << wordPattern("abba", "dog dog dog dog") << endl;
  cout << wordPattern("aba", "dog cat cat") << endl;
  return 0;
}

/*
Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Explanation:
The bijection can be established as:
'a' maps to "dog".
'b' maps to "cat".


Example 2:
Input: pattern = "abba", s = "dog cat cat fish"
Output: false


Example 3:
Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false



Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
*/