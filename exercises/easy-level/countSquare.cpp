// 1925. Count Square Sum Triples
#include <iostream>

using namespace std;

int countTriples(int n) {
  int count = 0;
  for (int i = 3; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      int ab = (i * i) + (j * j);
      int r = sqrt(ab);
      
      if (r*r == ab && r <= n)
        count += 2;
    }
  }
  return count;
}

int main()
{
  for (int i = 1; i <= 18; i++) {
    cout << i << ": " << countTriples(i) << endl;
  }
  return 0;
}

/*
Example 1:

Input: n = 5
Output: 2
Explanation: The square triples are (3,4,5) and (4,3,5).



Example 2:

Input: n = 10
Output: 4
Explanation: The square triples are (3,4,5), (4,3,5), (6,8,10), and (8,6,10).
 * */
