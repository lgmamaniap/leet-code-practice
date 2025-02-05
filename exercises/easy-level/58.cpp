// 58. Length of Last Word
#include <iostream>
#include <sstream> 

using namespace std;

int lengthOfLastWord(string s) {
    istringstream ss(s);
    string aux;

    int resp = 0;

    while(ss >> aux) {
        resp = aux.size();
    }

    return resp;
}

int main()
{
  cout << lengthOfLastWord("Hello World") << endl;
  cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
  cout << lengthOfLastWord("luffy is still joyboy") << endl;
  return 0;
}


/*
Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.


Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.


Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
*/
