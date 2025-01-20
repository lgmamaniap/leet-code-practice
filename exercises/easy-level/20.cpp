// 20. Valid Parentheses
#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

bool isOpen(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool isValid(string s) {
    unordered_map<char, char> m;
    stack<char> st;
    m[')'] = '(';
    m['}'] = '{';
    m[']'] = '[';
    st.push(s[0]);

    for (int i = 1; i < s.size(); i++) {
        if (isOpen(s[i])) st.push(s[i]);
        else {
            if (st.empty()) return false;

            if (m[s[i]] != st.top()) return false;
            else st.pop();
        }
    }

    if (st.size() > 0) return false;

    return true;
}

int main()
{
  cout << isValid("()") << endl;
  cout << isValid("()[]{}") << endl;
  cout << isValid("(]") << endl;
  cout << isValid("([])") << endl;
  return 0;
}


/*
Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
