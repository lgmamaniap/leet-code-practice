// 1736. Latest Time by Replacing Hidden Digits

#include <iostream>

using namespace std;

string maximumTime(string time)
{
  char sh1, sh2, sm1, sm2;
  string response = "";

  if (time[0] == '?')
  {
    sh1 = time[1] != '?'
              ? time[1] - '0' > 3
                    ? '1'
                    : '2'
              : '2';
    response.push_back(sh1);
  }
  else
  {
    response.push_back(time[0]);
  }

  if (time[1] == '?')
  {
    sh2 = time[0] != '?'
              ? time[0] - '0' > 1
                    ? '3'
                    : '9'
              : '3';
    response.push_back(sh2);
  }
  else
  {
    response.push_back(time[1]);
  }

  response.push_back(':');

  sm1 = time[3] == '?' ? '5' : time[3];
  response.push_back(sm1);

  sm2 = time[4] == '?' ? '9' : time[4];
  response.push_back(sm2);

  return response;
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