// 2047. Number of Valid Words in a Sentence
#include <iostream>
#include <regex>
#include <map>

using namespace std;

int countValidWords(string sentence) {
    int count = 0, idx = 0;

    while(idx < sentence.size()) {
        int it = idx;
        map<char, pair<int, int>> chars;
        bool isDigit = false;

        if (sentence[idx] == ' ') {
            idx++;
            continue;
        }

        string acc = "";

        while (it < sentence.size() && sentence[it] != ' ') {
            if (isdigit(sentence[it])) {
                isDigit = true;
            }
            chars[sentence[it]].first++;
            chars[sentence[it]].second = it;

            acc += sentence[it];

            it++;
        }



        bool isValid = true;
        pair<int, int> item;

        if (!isDigit) {
            if (chars.count('-')) {
                item = chars['-'];
                if (item.first > 1) isValid = false;
                if (item.first == 1 && (item.second == idx || item.second == it - 1)) isValid = false;
            }

            if (chars.count('!')) {
                item = chars['!'];
                if (item.first > 1) isValid = false;
                if (item.first == 1 && item.second != it - 1) isValid = false;
            }

            if (chars.count('.')) {
                item = chars['.'];
                if (item.first > 1) isValid = false;
                if (item.first == 1 && item.second != it - 1) isValid = false;
            }

            if (chars.count(',')) {
                item = chars[','];
                if (item.first > 1) isValid = false;
                if (item.first == 1 && item.second != it - 1) isValid = false;
            }

            if (isValid) count++;
        }

        idx = it++;
    }
    return count;
}

int main()
{
  
  return 0;
}


/*
Example 1:

Input: sentence = "cat and  dog"
Output: 3
Explanation: The valid words in the sentence are "cat", "and", and "dog".


Example 2:

Input: sentence = "!this  1-s b8d!"
Output: 0
Explanation: There are no valid words in the sentence.
"!this" is invalid because it starts with a punctuation mark.
"1-s" and "b8d" are invalid because they contain digits.


Example 3:

Input: sentence = "alice and  bob are playing stone-game10"
Output: 5
Explanation: The valid words in the sentence are "alice", "and", "bob", "are", and "playing".
"stone-game10" is invalid because it contains digits.
 

Constraints:

1 <= sentence.length <= 1000
sentence only contains lowercase English letters, digits, ' ', '-', '!', '.', and ','.
There will be at least 1 token.
*/
