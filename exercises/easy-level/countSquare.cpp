// 1925. Count Square Sum Triples
#include <iostream>

using namespace std;

int calculate(int n) {
  if(n < 5) return 0;
    int acc[255];
    for (int i = 1; i <= n; i++) {
      acc[i] = i * i;
    }
    
    int count = 0, j;
    
    for (int i = 3; i < n - 1; i++) {
      j = i + 1;
      while (acc[i] + acc[j] <= acc[n]) {
        
        if (acc[i] + acc[j] == acc[n]) {
          count += 2;
        }
        j++;
      }
    }
    return count;
}

int countTriples(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    count += calculate(i);
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
