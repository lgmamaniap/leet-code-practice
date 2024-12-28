// 1732. Find the Highest Altitude

#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int> &gain)
{
  int max = 0, acc = 0;
  for (int i = 0; i < gain.size(); i++)
  {
    acc += gain[i];
    if (acc > max)
      max = acc;
  }
  return max;
}

int main()
{
  vector<int> test1 = {-5, 1, 5, 0, -7};
  vector<int> test2 = {-4, -3, -2, -1, 4, 3, 2};
  cout << largestAltitude(test1) << endl;
  cout << largestAltitude(test2) << endl;
  return 0;
}

/*

Example 1:

Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
Example 2:

Input: gain = [-4,-3,-2,-1,4,3,2]
Output: 0
Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.

*/