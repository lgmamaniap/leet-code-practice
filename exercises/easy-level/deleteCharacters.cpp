// 1957. Delete Characters to Make Fancy String
#include <iostream>

using namespace std;

string makeFancyString(string s) {
    int count = 1;
    char aux = '1';
    string resp = "";

    for (char i: s) {
        if (aux == i) count++;
        else count = 1;

        if (count < 3) resp += i;

        aux = i;
    }

    return resp;
}

int main()
{
  cout << makeFancyString("leeetcode") << endl;
  cout << makeFancyString("aaabaaaa") << endl;
  cout << makeFancyString("aab") << endl;
  return 0;
}

/*
Example 1:

Input: s = "leeetcode"
Output: "leetcode"
Explanation:
Remove an 'e' from the first group of 'e's to create "leetcode".
No three consecutive characters are equal, so return "leetcode".


Example 2:

Input: s = "aaabaaaa"
Output: "aabaa"
Explanation:
Remove an 'a' from the first group of 'a's to create "aabaaaa".
Remove two 'a's from the second group of 'a's to create "aabaa".
No three consecutive characters are equal, so return "aabaa".


Example 3:

Input: s = "aab"
Output: "aab"
Explanation: No three consecutive characters are equal, so return "aab".
 

Constraints:

1 <= s.length <= 105
s consists only of lowercase English letters.
*/
