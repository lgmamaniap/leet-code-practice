// 344. Reverse String
#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char> &s)
{
  for (int i = 0, j = s.size() - 1; i * 2 < s.size(); i++, j--)
  {
    swap(s[i], s[j]);
  }
}

void printVec(vector<char> &s)
{
  cout << "[ ";
  for (char i : s)
  {
    cout << i << " ";
  }
  cout << "]" << endl;
}

int main()
{
  vector<char> test = {'h', 'e', 'l', 'l', 'o'};
  reverseString(test);
  printVec(test);

  test = {'H', 'a', 'n', 'n', 'a', 'h'};
  reverseString(test);
  printVec(test);

  return 0;
}

/*
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]


Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]


Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
*/