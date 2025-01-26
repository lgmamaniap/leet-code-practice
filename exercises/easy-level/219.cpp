// 219. Contains Duplicate II
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
  unordered_map<int, int> m;

  for (int i = 0; i < nums.size(); i++)
  {
    if (!m.count(nums[i]))
    {
      m[nums[i]] = i;
      continue;
    }

    int dis = abs(m[nums[i]] - i);

    cout << "dis: " << dis << endl;

    if (dis <= k)
      return true;

    m[nums[i]] = i;
  }

  return false;
}

int main() {
  vector<int> test = {1,2,3,1};
  cout << containsNearbyDuplicate(test, 3) << endl;

  test = {1,0,1,1};
  cout << containsNearbyDuplicate(test, 1) << endl;

  test = {1,2,3,1,2,3};
  cout << containsNearbyDuplicate(test, 2) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true


Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true


Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105
*/