// 205. Isomorphic Strings
#include <iostream>
#include <unordered_map>

using namespace std;

bool isIsomorphic(string s, string t)
{
  char sMap[256] = {0}, tMap[256] = {0};

  for (int i = 0; i < s.size(); i++)
  {
    if (tMap[t[i]])
    {
      if (tMap[t[i]] != s[i])
        return false;
    }
    else
    {
      tMap[t[i]] = s[i];
    }

    if (sMap[s[i]])
    {
      if (sMap[s[i]] != t[i])
        return false;
    }
    else
    {
      sMap[s[i]] = t[i];
    }
  }

  return true;
}

int main()
{
  string s, t;
  s = "egg";
  t = "add";
  cout << isIsomorphic(s, t) << endl;

  s = "foo";
  t = "bar";
  cout << isIsomorphic(s, t) << endl;

  s = "paper";
  t = "title";
  cout << isIsomorphic(s, t) << endl;
  return 0;
}

/*
Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.


Example 2:

Input: s = "foo", t = "bar"

Output: false

Explanation:

The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.



Example 3:

Input: s = "paper", t = "title"

Output: true



Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/