// 2053. Kth Distinct String in an Array
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    unordered_set<string> words, uniques;
    for (string word : arr) {
        if (!words.count(word)) {
            words.insert(word);
            uniques.insert(word);
        } else {
            uniques.erase(word);
        }
    }

    if (uniques.size() < k) return "";

    int count = 0;

    for (string word : arr) {
        if (uniques.count(word)) count++;

        if (count == k) return word;
    }

    return "";
}

int main()
{
  vector<string> test1, test2, test3;
  test1 = {"d","b","c","b","c","a"};
  test2 = {"aaa","aa","a"};
  test3 = {"a","b","a"};
  
  cout << kthDistinct(test1, 2) << endl;
  cout << kthDistinct(test2, 1) << endl;
  cout << kthDistinct(test3, 3) << endl;
  
  return 0;
}


/*
Example 1:

Input: arr = ["d","b","c","b","c","a"], k = 2
Output: "a"
Explanation:
The only distinct strings in arr are "d" and "a".
"d" appears 1st, so it is the 1st distinct string.
"a" appears 2nd, so it is the 2nd distinct string.
Since k == 2, "a" is returned. 


Example 2:

Input: arr = ["aaa","aa","a"], k = 1
Output: "aaa"
Explanation:
All strings in arr are distinct, so the 1st string "aaa" is returned.


Example 3:

Input: arr = ["a","b","a"], k = 3
Output: ""
Explanation:
The only distinct string is "b". Since there are fewer than 3 distinct strings, we return an empty string "".
 

Constraints:

1 <= k <= arr.length <= 1000
1 <= arr[i].length <= 5
arr[i] consists of lowercase English letters.
 * */
