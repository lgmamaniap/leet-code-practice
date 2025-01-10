// 1995. Count Special Quadruplets

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countMajors(int index, vector<int>& nums) {
    int resp = 0;
    for (int i : nums)
        if (i > index) resp++;
    return resp;
}

int countQuadruplets(vector<int>& nums) {
    map<int, vector<int>> elements;
    for (int i = 0; i < nums.size(); i++) {
        elements[nums[i]].push_back(i);
    }

    int resp = 0;
    for (int a = 0; a < nums.size() - 3; a++) {
        for (int b = a + 1; b < nums.size() - 2; b++) {
            for (int c = b + 1; c < nums.size() - 1; c++) {
                if (!elements.count(nums[a] + nums[b] + nums[c]))
                    continue;

                resp += countMajors(c, elements[nums[a] + nums[b] + nums[c]]);
            }
        }
    }
    return resp;
}

int main()
{
  vector<int> test1 = {1,2,3,6};
  vector<int> test2 = {3,3,6,4,5};
  vector<int> test3 = {1,1,1,3,5};
  
  cout << countQuadruplets(test1) << endl;
  cout << countQuadruplets(test2) << endl;
  cout << countQuadruplets(test3) << endl;
  return 0;
}

/*
Example 1:

Input: nums = [1,2,3,6]
Output: 1
Explanation: The only quadruplet that satisfies the requirement is (0, 1, 2, 3) because 1 + 2 + 3 == 6.
Example 2:

Input: nums = [3,3,6,4,5]
Output: 0
Explanation: There are no such quadruplets in [3,3,6,4,5].
Example 3:

Input: nums = [1,1,1,3,5]
Output: 4
Explanation: The 4 quadruplets that satisfy the requirement are:
- (0, 1, 2, 3): 1 + 1 + 1 == 3
- (0, 1, 3, 4): 1 + 1 + 3 == 5
- (0, 2, 3, 4): 1 + 1 + 3 == 5
- (1, 2, 3, 4): 1 + 1 + 3 == 5
 

Constraints:

4 <= nums.length <= 50
1 <= nums[i] <= 100
*/
