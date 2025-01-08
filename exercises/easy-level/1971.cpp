// 1971. Find if Path Exists in Graph
#include <iostream>
#include <vector>

using namespace std;

bool explore(vector<vector<int>>& edges, int source, int destination, vector<bool>& visited) {
visited[source] = true;

if (source == destination) return true;

bool resp = false;
for (int i: edges[source]) {
    if (visited[i]) continue;
    resp = resp || explore(edges, i, destination, visited);
}

return resp;
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
vector<bool> visited(n, false);
vector<vector<int>> tree(n + 1);

for (vector<int> item: edges) {
    tree[item[0]].push_back(item[1]);
    tree[item[1]].push_back(item[0]);
}
bool resp = explore(tree, source, destination, visited);
return resp;
}

int main()
{
  vector<vector<int>> test1 = {{0,1},{1,2},{2,0}};
  vector<vector<int>> test2 = {{0,1},{0,2},{3,5},{5,4},{4,3}};
  vector<vector<int>> test3 = {
    {0,7},
    {0,8},
    {6,1},
    {2,0},
    {0,4},
    {5,8},
    {4,7},
    {1,3},
    {3,5},
    {6,5}
    };
  
  cout << validPath(3, test1, 0, 2) << endl;
  cout << validPath(6, test2, 0, 5) << endl;
  cout << validPath(10, test3, 0, 5) << endl;
  return 0;
}

/*
Example 1:


Input: n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
Output: true
Explanation: There are two paths from vertex 0 to vertex 2:
- 0 → 1 → 2
- 0 → 2
Example 2:


Input: n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
Output: false
Explanation: There is no path from vertex 0 to vertex 5.
 
 
Input: n = 10, edges = [[0,7],[0,8],[6,1],[2,0],[0,4],[5,8],[4,7],[1,3],[3,5],[6,5]], source = 7, destination = 5
Output = true

Constraints:

1 <= n <= 2 * 105
0 <= edges.length <= 2 * 105
edges[i].length == 2
0 <= ui, vi <= n - 1
ui != vi
0 <= source, destination <= n - 1
There are no duplicate edges.
There are no self edges.

*/
