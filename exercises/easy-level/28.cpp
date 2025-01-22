// 28. Find the Index of the First Occurrence in a String
#include <iostream>

using namespace std;

int strStr(string haystack, string needle) {
    for (int i = 0; i < haystack.size(); i++) {
        if (haystack[i] == needle[0]) {
            bool find = true;
            for (int j = 0, k = i; j < needle.size(); j++, k++) {
                if (haystack[k] != needle[j]) {
                    find = false;
                    break;
                }
            }
            if (find) return i;
        }
    }

    return -1;
}

int main()
{
  cout << strStr("sadbutsad", "sad") << endl;
  cout << strStr("leetcode", "leeto") << endl;
  return 0;
}


/*
Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.


Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/
