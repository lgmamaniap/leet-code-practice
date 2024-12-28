// 1725. Number Of Rectangles That Can Form The Largest Square
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int countGoodRectangles(vector<vector<int>> &rectangles)
{
  map<int, int> acc;
  int resp = 0;

  for (int i = 0; i < rectangles.size(); i++)
  {
    int minRec = min(rectangles[i][0], rectangles[i][1]);
    if (!acc.count(minRec))
    {
      acc[minRec] = 0;
    }
    acc[minRec]++;
    if (minRec > resp)
    {
      resp = minRec;
    }
  }
  return acc[resp];
}

int main()
{
  vector<vector<int>> test1 = {
      {5, 8},
      {3, 9},
      {5, 12},
      {16, 5},
  };
  vector<vector<int>> test2 = {
      {2, 3},
      {3, 7},
      {4, 3},
      {3, 7},
  };
  cout << countGoodRectangles(test1) << endl;
  cout << countGoodRectangles(test2) << endl;
  return 0;
}

/*

Example 1:

Input: rectangles = [[5,8],[3,9],[5,12],[16,5]]
Output: 3
Explanation: The largest squares you can get from each rectangle are of lengths [5,3,5,5].
The largest possible square is of length 5, and you can get it out of 3 rectangles.
Example 2:

Input: rectangles = [[2,3],[3,7],[4,3],[3,7]]
Output: 3

 */