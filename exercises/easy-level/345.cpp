// 345. Reverse Vowels of a String

#include <iostream>
#include <stack>

using namespace std;

bool isVowel(char c)
{
  return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
}

string reverseVowels(string s)
{
  stack<char> sChar;
  for (int c : s)
    if (isVowel(c))
      sChar.push(c);

  for (int i = 0; i < s.size(); i++)
  {
    if (isVowel(s[i]))
    {
      s[i] = sChar.top();
      sChar.pop();
    }
  }

  return s;
}

int main()
{
  cout << reverseVowels("IceCreAm") << endl;
  cout << reverseVowels("leetcode") << endl;
  return 0;
}

/*
Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"



Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/