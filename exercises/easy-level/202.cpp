// 202. Happy Number
#include <iostream>
#include <unordered_set>

using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while(n > 0) {
        int dig = n % 10;
        sum = sum + (dig * dig);
        n = n / 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> proc;
    int res = n;

    while (res != 1) {
        res = sumDigits(res);

        if (proc.count(res)) return false;

        proc.insert(res);
    }

    return true;
}

int main()
{
  cout << isHappy(19) << endl;
  cout << isHappy(2) << endl;
  return 0;
}


/*
Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1


Example 2:

Input: n = 2
Output: false
 

Constraints:

1 <= n <= 231 - 1
*/
