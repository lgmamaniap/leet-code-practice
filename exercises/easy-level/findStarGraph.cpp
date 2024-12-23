// 1791. Find Center of Star Graph

#include <iostream>
#include <vector>

using namespace std;

int findCenter(vector<vector<int>> &edges)
{
  int acc[100005] = {};
  int resp = 0;
  int min = INT_MIN;
  for (int i = 0; i < edges.size(); i++)
  {
    vector<int> item = edges[i];
    acc[item[0]]++;
    acc[item[1]]++;

    if (acc[item[0]] > min)
    {
      min = acc[item[0]];
      resp = item[0];
    }

    if (acc[item[1]] > min)
    {
      min = acc[item[1]];
      resp = item[1];
    }
  }

  cout << "min: " << min << endl;
  cout << "resp: " << resp << endl;

  for (int i = 0; i < 20; i++)
  {
    cout << i << " : " << acc[i] << " | ";
  }
  cout << endl;

  return resp;
}

// Best solution
int findCenter(vector<vector<int>> &edges)
{
  return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
}

int main()
{
  vector<vector<int>> items = {
      {9, 1},
      {9, 2},
      {9, 3},
      {4, 9},
      {9, 5},
      {6, 9},
      {9, 7},
      {9, 8},
      {10, 9},
      {11, 9},
      {12, 9}};

  cout << findCenter(items) << endl;
  return 0;
}

/**
 *
 * class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
    return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
}
};
 */