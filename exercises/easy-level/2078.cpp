// 2078. Two Furthest Houses With Different Colors
#include <iostream>
#include <vector>

using namespace std;

int maxDistance(vector<int>& colors) {
    int n = colors.size();
    int left = 0;
    int right = n - 1;

    
    while (colors[left] == colors[right]) {
        right--;
    }
    int maxDist = right - left;

    
    right = n - 1;

    while (colors[left] == colors[right]) {
        left++;
    }
    maxDist = max(maxDist, right - left);

    return maxDist;
}

int main()
{
  vector<int> test1, test2, test3;
  test1 = {1,1,1,6,1,1,1};
  test2 = {1,8,3,8,3};
  test3 = {0,1};
  
  cout << maxDistance(test1) << endl;
  cout << maxDistance(test2) << endl;
  cout << maxDistance(test3) << endl;
  return 0;
}

/*
Example 1:


Input: colors = [1,1,1,6,1,1,1]
Output: 3
Explanation: In the above image, color 1 is blue, and color 6 is red.
The furthest two houses with different colors are house 0 and house 3.
House 0 has color 1, and house 3 has color 6. The distance between them is abs(0 - 3) = 3.
Note that houses 3 and 6 can also produce the optimal answer.


Example 2:


Input: colors = [1,8,3,8,3]
Output: 4
Explanation: In the above image, color 1 is blue, color 8 is yellow, and color 3 is green.
The furthest two houses with different colors are house 0 and house 4.
House 0 has color 1, and house 4 has color 3. The distance between them is abs(0 - 4) = 4.


Example 3:

Input: colors = [0,1]
Output: 1
Explanation: The furthest two houses with different colors are house 0 and house 1.
House 0 has color 0, and house 1 has color 1. The distance between them is abs(0 - 1) = 1.
 

Constraints:

n == colors.length
2 <= n <= 100
0 <= colors[i] <= 100
Test data are generated such that at least two houses have different colors.
*/
