// 1779. Find Nearest Point That Has the Same X or Y Coordinate

#include <vector>
#include <iostream>

using namespace std;

int nearestValidPoint(int x, int y, vector<vector<int>> &points)
{
  int index = -1, min = INT_MAX, manhatan;
  for (int i = 0; i < points.size(); i++)
  {
    if (x == points[i][0] && y == points[i][1])
      return i;
    if (x == points[i][0] || y == points[i][1])
    {
      manhatan = abs(x - points[i][0]) + abs(y - points[i][1]);
      if (manhatan < min)
      {
        min = manhatan;
        index = i;
      }
    }
  }
  return index;
}

int main()
{
  vector<vector<int>> points = {{}};
  int x = 3, y = 4;
  vector<vector<int>> points1 = {
      {1, 2},
      {3, 1},
      {2, 4},
      {2, 3},
      {4, 4}};

  vector<vector<int>> points2 = {
      {3, 4}};

  vector<vector<int>> points3 = {
      {2, 3}};

  vector<vector<int>> points4 = {{1, 2}};

  cout << nearestValidPoint(x, y, points1) << endl;
  cout << nearestValidPoint(x, y, points2) << endl;
  cout << nearestValidPoint(x, y, points3) << endl;
  cout << nearestValidPoint(1, 1, points4) << endl;
  return 0;
}