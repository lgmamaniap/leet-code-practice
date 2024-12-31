// 1763. Longest Nice Substring
#include <iostream>
#include <unordered_set>

using namespace std;

string longestNiceSubstring(string s) {
        if(s.size() < 2) return "";
        cout << "s: " << s << endl;
        
        unordered_set<char>set(begin(s), end(s));
        
        cout << "unordered set: " << endl;
        for (auto itt: set) {
          cout << itt << " ";
        }
        cout << "\n----------------------------" << endl;
        for(int i = 0; i < s.size(); i++) {
            if(!set.count((char)(s[i] ^ 32))) {    //  'a' ^ 32 = 65 and 'A' ^ 32 = 97 // by XOR with 32 we can change b|w lower and uppercase 
                string s1 = longestNiceSubstring(s.substr(0, i));
                string s2 = longestNiceSubstring(s.substr(i + 1));
                cout << "s1: " << s1 << endl;
                cout << "s2: " << s2 << endl;
                return s1.size() >= s2.size() ? s1 : s2;
            }
        }
        return s;
    }

int main() {
  cout << longestNiceSubstring("YazaAay") << endl;
  cout << longestNiceSubstring("Bb") << endl;
  cout << longestNiceSubstring("c") << endl;
  cout << longestNiceSubstring("faAzaaAbaAaa") << endl;
  return 0;
}

/*
 Example 1:

Input: s = "YazaAay"
Output: "aAa"
Explanation: "aAa" is a nice string because 'A/a' is the only letter of the alphabet in s, and both 'A' and 'a' appear.
"aAa" is the longest nice substring.
Example 2:

Input: s = "Bb"
Output: "Bb"
Explanation: "Bb" is a nice string because both 'B' and 'b' appear. The whole string is a substring.
Example 3:

Input: s = "c"
Output: ""
Explanation: There are no nice substrings.
 * */
