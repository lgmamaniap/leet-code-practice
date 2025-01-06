// 1961. Check If String Is a Prefix of Array
#include <iostream>
#include <vector>

using namespace std;

bool isPrefixString(string s, vector<string>& words) {
  string resp = "";
  for (int i = 0; i < words.size() && resp.size() < s.size(); i++) {
      resp += words[i];
  }
  return s == resp;
}

int main()
{
  vector<string> test1 = {"i","love","leetcode","apples"};
  vector<string> test2 = {"apples","i","love","leetcode"};
  cout << isPrefixString("iloveleetcode", test1) << endl;
  cout << isPrefixString("iloveleetcode", test2) << endl;
  return 0;
}

/*
Example 1:

Input: s = "iloveleetcode", words = ["i","love","leetcode","apples"]
Output: true
Explanation:
s can be made by concatenating "i", "love", and "leetcode" together.


Example 2:

Input: s = "iloveleetcode", words = ["apples","i","love","leetcode"]
Output: false
Explanation:
It is impossible to make s using a prefix of arr.
 

Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 20
1 <= s.length <= 1000
words[i] and s consist of only lowercase English letters.
*/
