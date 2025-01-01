// 1832. Check if the Sentence Is Pangram
#include <iostream>
#include <unordered_set>

using namespace std;

bool checkIfPangram(string sentence) {
  if (sentence.size() < 26) return false;
  unordered_set<char> letters;
  for (int i = 0; i < sentence.size(); i++)
    letters.insert(sentence[i]);
  
  return letters.size() == 26;
}

int main()
{
  cout << checkIfPangram("thequickbrownfoxjumpsoverthelazydog") << endl;
  cout << checkIfPangram("leetcode") << endl;
  return 0;
}

/*
 Example 1:

  Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
  Output: true
  Explanation: sentence contains at least one of every letter of the English alphabet.


  Example 2:

  Input: sentence = "leetcode"
  Output: false
 */
