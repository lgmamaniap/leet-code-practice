// 2062. Count Vowel Substrings of a String
#include <iostream>
#include <unordered_map>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowelSubstrings(string word) {
    
    unordered_map<char,int> m;
    int n = word.size();
    int ans=0, cnt=0, j=0, pref=0;
    
    for(int i = 0; i < n; i++){
        if(isVowel(word[i])) {
            if(m[word[i]]++ == 0) cnt++;
            
            while(m[word[j]] > 1) {
        m[word[j++]]--;
                pref++;
            }
            
            if(cnt==5) ans += (1 + pref);
        } else {
            cnt=0;
            pref=0;
            m.clear();
            j=i+1;
        }
    }
    return ans;
}

int main()
{
  
  return 0;
}

/*
Example 1:

Input: word = "aeiouu"
Output: 2
Explanation: The vowel substrings of word are as follows (underlined):
- "aeiouu"
- "aeiouu"


Example 2:

Input: word = "unicornarihan"
Output: 0
Explanation: Not all 5 vowels are present, so there are no vowel substrings.


Example 3:

Input: word = "cuaieuouac"
Output: 7
Explanation: The vowel substrings of word are as follows (underlined):
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
 

Constraints:

1 <= word.length <= 100
word consists of lowercase English letters only.
*/
