// 1935. Maximum Number of Words You Can Type
#include <iostream>
#include <unordered_set>

using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
    
    int words = 0;
    bool broke = false;

    for (char i: text) {
        if (i == ' ') {
            if (!broke) {
                words++;
            }
            broke = false;
            continue;
        }
        if (broken.count(i)) broke = true;
    }

    if (!broke) words++;
    return words;
}

int main()
{
  cout << canBeTypedWords("hello world", "ad") << endl;
  cout << canBeTypedWords("leet code", "lt") << endl;
  cout << canBeTypedWords("leet code", "e") << endl;
  return 0;
}

/*
Example 1:

Input: text = "hello world", brokenLetters = "ad"
Output: 1
Explanation: We cannot type "world" because the 'd' key is broken.


Example 2:

Input: text = "leet code", brokenLetters = "lt"
Output: 1
Explanation: We cannot type "leet" because the 'l' and 't' keys are broken.


Example 3:

Input: text = "leet code", brokenLetters = "e"
Output: 0
Explanation: We cannot type either word because the 'e' key is broken.

*/
