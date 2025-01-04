// 1952. Three Divisors
#include <iostream>

using namespace std;

bool isThree(int n) {
    int divs = 0;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            divs++;
            if (i != n / i) divs++;
        }
        if (divs > 1) return false;
    }
    return divs == 1;
}

int main()
{
  cout << isThree(2) << endl;
  cout << isThree(4) << endl;
  return 0;
}


/*
Example 1:

Input: n = 2
Output: false
Explantion: 2 has only two divisors: 1 and 2.


Example 2:

Input: n = 4
Output: true
Explantion: 4 has three divisors: 1, 2, and 4.
 

Constraints:

1 <= n <= 10^4
 */
