// 2000. Reverse Prefix of Word
#include <iostream>

using namespace std;

string reversePrefix(string word, char ch) {
    string resp = "";
    bool isFound = false;
    int i = 0;

    while(i < word.size() && !isFound) {
        resp = word[i] + resp;
        if (word[i] == ch) isFound = true;
        i++;
    }

    if (i < word.size())
        resp += word.substr(i);

    return isFound ? resp : word;
}

int main()
{
  cout << reversePrefix("abcdefd", 'd') << endl;
  cout << reversePrefix("xyxzxe", 'z') << endl;
  cout << reversePrefix("abcd", 'z') << endl;
  return 0;
}

/*
Example 1:

Input: word = "abcdefd", ch = "d"
Output: "dcbaefd"
Explanation: The first occurrence of "d" is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".
Example 2:

Input: word = "xyxzxe", ch = "z"
Output: "zxyxxe"
Explanation: The first and only occurrence of "z" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".
Example 3:

Input: word = "abcd", ch = "z"
Output: "abcd"
Explanation: "z" does not exist in word.
You should not do any reverse operation, the resulting string is "abcd".
 

Constraints:

1 <= word.length <= 250
word consists of lowercase English letters.
ch is a lowercase English letter.
*/
