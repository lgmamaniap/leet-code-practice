// 67. Add Binary
#include <iostream>

using namespace std;

string addBinary(string a, string b) {
    int aSize = a.size();
    int bSize = b.size();
    int maxSize = max(aSize, bSize);
    int acc = 0;
    string res = "";

    for (int i = 0; i < maxSize; i++) {
        int cnt = acc;
        
        if (i < aSize && a[aSize - 1 - i] == '1')
            cnt++;

        if (i < bSize && b[bSize - 1 - i] == '1')
            cnt++;

        char x = (cnt&1) == 0 ? '0' : '1';

        res = x + res;

        acc = cnt < 2 ? 0 : 1;
    }

    if (acc > 0) res = '1' + res;

    return res;
}

int main()
{
  string a = "11", b = "1";
  cout << addBinary(a, b) << endl;
  
  a = "1010", b = "1011";
  cout << addBinary(a, b) << endl;
  return 0;
}


/*
Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/
