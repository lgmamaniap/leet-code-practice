// 1736. Latest Time by Replacing Hidden Digits

#include <iostream>

using namespace std;

string maximumTime(string time)
{
  string resp = time;
  resp[0] = resp[0] != '?'
                ? resp[0]
                : (resp[1] == '?' || resp[1] <= '3'
                       ? '2'
                       : '1');
  resp[1] = resp[1] != '?'
                ? resp[1]
                : (resp[0] == '?' || resp[0] > '1'
                       ? '3'
                       : '9');
  resp[3] = resp[3] != '?' ? resp[3] : '5';
  resp[4] = resp[4] != '?' ? resp[4] : '9';
  return resp;
}

int main()
{
  cout << maximumTime("2?:?0") << endl;
  cout << maximumTime("0?:3?") << endl;
  cout << maximumTime("1?:22") << endl;
  cout << maximumTime("?4:03") << endl;
  cout << maximumTime("??:3?") << endl;
  return 0;
}

/*
Example 1:

Input: time = "2?:?0"
Output: "23:50"
Explanation: The latest hour beginning with the digit '2' is 23 and the latest minute ending with the digit '0' is 50.
Example 2:

Input: time = "0?:3?"
Output: "09:39"
Example 3:

Input: time = "1?:22"
Output: "19:22"
*/