// 338. Counting Bits

#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int n)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  int offset = 1;

  for (int i = 1; i <= n; i++)
  {
    if (offset * 2 == i)
      offset = i;

    dp[i] = 1 + dp[i - offset];
  }

  return dp;
}

int main()
{
  vector<int> resp = countBits(2);

  resp = countBits(5);
  return 0;
}

/*
Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10


Example 2:
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101


Constraints:

0 <= n <= 105

*/