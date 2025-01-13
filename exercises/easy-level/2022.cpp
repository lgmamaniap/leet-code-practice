// 2022. Convert 1D Array Into 2D Array
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> r;
    if (original.size() != n * m) return r;

    int i = 0, j = 0;
    vector<vector<int>> resp(m);

    for (int item : original) {
        resp[i].push_back(item);
        j++;
        if (j == n) {
            i++;
            j = 0;
        }
    }

    return resp;
}

int main()
{
  vector<int> test1 = {1,2,3,4};
  vector<int> test2 = {1,2,3};
  vector<int> test3 = {1,2};
  
  cout << construct2DArray(test1, 2, 2) << endl;
  cout << construct2DArray(test2, 1, 3) << endl;
  cout << construct2DArray(test3, 1, 1) << endl;
  return 0;
}


/*
Example 1:


Input: original = [1,2,3,4], m = 2, n = 2
Output: [[1,2],[3,4]]
Explanation: The constructed 2D array should contain 2 rows and 2 columns.
The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.
The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.
Example 2:

Input: original = [1,2,3], m = 1, n = 3
Output: [[1,2,3]]
Explanation: The constructed 2D array should contain 1 row and 3 columns.
Put all three elements in original into the first row of the constructed 2D array.
Example 3:

Input: original = [1,2], m = 1, n = 1
Output: []
Explanation: There are 2 elements in original.
It is impossible to fit 2 elements in a 1x1 2D array, so return an empty 2D array.
 

Constraints:

1 <= original.length <= 5 * 104
1 <= original[i] <= 105
1 <= m, n <= 4 * 104
*/
