// 1796. Second Largest Digit in a String
#include <iostream>
#include <set>

using namespace std;

int secondHighest(string s) {
  set<char> numbers;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] >= '0' && s[i] <= '9') numbers.insert(s[i]);
  }
  if (numbers.size() < 2) return -1;
  auto it = next(numbers.begin(), numbers.size() - 2);
  return *it - '0';
}

int main()
{
  cout << secondHighest("dfa12321afd") << endl;
  cout << secondHighest("abc1111") << endl;
  cout << secondHighest("ck077") << endl;
  return 0;
}

/*
  Example 1:

  Input: s = "dfa12321afd"
  Output: 2
  Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.
  Example 2:

  Input: s = "abc1111"
  Output: -1
  Explanation: The digits that appear in s are [1]. There is no second largest digit.
 
 */
