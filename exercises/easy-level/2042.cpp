// 2042. Check if Numbers Are Ascending in a Sentence
#include <iostream>

using namespace std;

bool areNumbersAscending(string s) {
    int idx = 0;
    int min = 0;

    while(idx < s.size()) {
        if (isdigit(s[idx])) {
            string acc = "";
            while (s[idx] != ' ' && idx < s.size()) {
                acc += s[idx];
                idx++;
            }
            if (stoi(acc) <= min) return false;
            min = stoi(acc);
        }
        idx++;
    }
    return true;
}

int main()
{
  cout << areNumbersAscending("1 box has 3 blue 4 red 6 green and 12 yellow marbles") << endl;
  cout << areNumbersAscending("hello world 5 x 5") << endl;
  cout << areNumbersAscending("sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s") << endl;
  return 0;
}

/*
Example 1:

example-1
Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
Output: true
Explanation: The numbers in s are: 1, 3, 4, 6, 12.
They are strictly increasing from left to right: 1 < 3 < 4 < 6 < 12.
Example 2:

Input: s = "hello world 5 x 5"
Output: false
Explanation: The numbers in s are: 5, 5. They are not strictly increasing.
Example 3:

example-3
Input: s = "sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s"
Output: false
Explanation: The numbers in s are: 7, 51, 50, 60. They are not strictly increasing.
 

Constraints:

3 <= s.length <= 200
s consists of lowercase English letters, spaces, and digits from 0 to 9, inclusive.
The number of tokens in s is between 2 and 100, inclusive.
The tokens in s are separated by a single space.
There are at least two numbers in s.
Each number in s is a positive number less than 100, with no leading zeros.
s contains no leading or trailing spaces.
*/
