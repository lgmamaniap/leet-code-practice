// 2047. Number of Valid Words in a Sentence
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

bool isValidWord(const string& word) {
    map<char, int> cMap;
    for (int i = 0; i < word.size(); i++) {
        char c = word[i];
        if (isdigit(c)) return false;

        cMap[c]++;

        if (c == '-')
            if (cMap[c] > 1 || i == 0 || i == word.size() - 1)
                return false;
        
        if (c != '-' && c < 'a') {
            if (cMap[c] > 1 || i != word.size() - 1)
                return false;
            if (word.size() > 1 && i == word.size() - 1 && word[i - 1] < 'a')
                return false;
        }
    }
    return true;
}

int countValidWords(string sentence) {
    istringstream ss(sentence);
    string token;
    int count = 0;

    while(ss >> token) {
        if (isValidWord(token)) count++;
    }

    return count;
}

int main()
{
  cout << countValidWords("cat and  dog") << endl;
  cout << countValidWords("!this  1-s b8d!") << endl;
  cout << countValidWords("alice and  bob are playing stone-game10") << endl;
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
