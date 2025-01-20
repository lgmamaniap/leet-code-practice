// 14. Longest Common Prefix
#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string min = strs[0];
    for (string i : strs)
        if (i.size() < min.size())
            min = i;

    if (min.size() == 0) return "";

    int right = min.size();
    for (string str : strs) {
        for (int i = 0; i < right; i++) {
            if (str[i] != min[i]) {
                right = i;
                break;
            }
        }
    }

    return min.substr(0, right);
}

int main()
{
  vector<string> test1, test2;
  test1 = {"flower","flow","flight"};
  test2 = {"dog","racecar","car"};
  
  cout << longestCommonPrefix(test1) << endl;
  cout << longestCommonPrefix(test2) << endl;
  return 0;
}


/*
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"


Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/
