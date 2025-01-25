// 125. Valid Palindrome

#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

bool isPalindrome(string s) {
    vector<char> res;

    for (char c : s) {
        if (isdigit(c) || isalpha(c)) {
            char lower = isdigit(c) ? c : tolower(c);
            res.push_back(lower);
        }
    }

    for (int i = 0; i * 2 < res.size(); i++) {
        if (res[i] != res[res.size() - 1 - i])
            return false;
    }

    return true;
}

int main()
{
  cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
  cout << isPalindrome("race a car") << endl;
  cout << isPalindrome(" ") << endl;
  return 0;
}

/*
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.


Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.


Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
