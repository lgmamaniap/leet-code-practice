// 66. Plus One
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    stack<int> st;
    int aca = 1;

    for (int i = digits.size() - 1; i >= 0; i--) {
        int v = digits[i] + aca;

        aca = v / 10;
        st.push(v % 10);
    }

    if (aca != 0) st.push(aca);

    vector<int> res;

    while(!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }

    return res;
}

int main()
{
  vector<int> test1, test2, test3, res1, res2, res3;
  test1 = {1,2,3};
  test2 = {4,3,2,1};
  test3 = {9};
  
  res1 = plusOne(test1);
  res2 = plusOne(test2);
  res3 = plusOne(test3);
  return 0;
}


/*
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].


Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].


Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
*/
