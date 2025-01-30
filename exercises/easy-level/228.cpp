// 228. Summary Ranges
#include <iostream>
#include <vector>

using namespace std;

string retStr(int i, int j, vector<int> &nums) {
  string resp;
  if (i == j) {
    resp = to_string(nums[i]);
    return resp;
  }
  resp = to_string(nums[i]) + "->" + to_string(nums[j]);
  return resp;
}

vector<string> summaryRanges(vector<int> &nums)
{
  int i = 0, j = 0;
  vector<string> resp;

  while (j < nums.size() - 1)
  {
    if (nums[j + 1] != nums[j] + 1) {
      resp.push_back(retStr(i, j, nums));
      i = j + 1;
    }
    j++;
  }
  resp.push_back(retStr(i, j, nums));
  return resp;
}

void printVector(vector<string> &resp) {
  cout << "Vector: ";
  for (string i : resp) {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> nums = {0,1,2,4,5,7};
  vector<string> resp = summaryRanges(nums);

  printVector(resp);

  nums = {0,2,3,4,6,8,9};
  resp = summaryRanges(nums);
  printVector(resp);

  return 0;
}

/*
Example 1:
Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"


Example 2:
Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"


Constraints:

0 <= nums.length <= 20
-231 <= nums[i] <= 231 - 1
All the values of nums are unique.
nums is sorted in ascending order.
*/