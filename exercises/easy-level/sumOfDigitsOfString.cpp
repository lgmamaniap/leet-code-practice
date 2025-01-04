// 1945. Sum of Digits of String After Convert

#include <iostream>

using namespace std;

string convert(string s) {
    string resp = "";
    for (char i: s) {
        resp += to_string(i - 96);
    }
    return resp;
}

string sumNums(string s) {
    int resp = 0;
    for (char i: s) {
        resp += i - '0';
    }
    return to_string(resp);
}

int getLucky(string s, int k) {
    string aux = convert(s);

    for (int i = 0; i < k; i++) {
        aux = sumNums(aux);
    } 

    return stoi(aux);
}

int main()
{
  cout << getLucky("iiii", 1) << endl;
  cout << getLucky("leetcode", 2) << endl;
  cout << getLucky("zbax", 2) << endl;
  cout << getLucky("hvmhoasabaymnmsd", 1) << endl;
  return 0;
}

/*
Example 1:

Input: s = "iiii", k = 1

Output: 36

Explanation:

The operations are as follows:
- Convert: "iiii" ➝ "(9)(9)(9)(9)" ➝ "9999" ➝ 9999
- Transform #1: 9999 ➝ 9 + 9 + 9 + 9 ➝ 36
Thus the resulting integer is 36.


Example 2:

Input: s = "leetcode", k = 2

Output: 6

Explanation:

The operations are as follows:
- Convert: "leetcode" ➝ "(12)(5)(5)(20)(3)(15)(4)(5)" ➝ "12552031545" ➝ 12552031545
- Transform #1: 12552031545 ➝ 1 + 2 + 5 + 5 + 2 + 0 + 3 + 1 + 5 + 4 + 5 ➝ 33
- Transform #2: 33 ➝ 3 + 3 ➝ 6
Thus the resulting integer is 6.



Example 3:

Input: s = "zbax", k = 2

Output: 8
*/
