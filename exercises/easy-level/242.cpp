// 242. Valid Anagram

#include <iostream>

using namespace std;

bool isAnagram(string s, string t)
{
  if (s.size() != t.size())
    return false;

  int chars[255];
  for (int i = 0; i < s.size(); i++)
  {
    chars[s[i]]++;
    chars[t[i]]--;
  }

  for (int i = 97; i < 123; i++)
  {
    if (chars[i] != 0)
      return false;
  }

  return true;
}

int main()
{
  cout << isAnagram("anagram", "nagaram") << endl;
  cout << isAnagram("rat", "car") << endl;
  return 0;
}

/*
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true


Example 2:
Input: s = "rat", t = "car"
Output: false



Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/