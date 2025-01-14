// 2032. Two Out of Three

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_set<int> pushed;
void processor(vector<int>& resp, unordered_set<int>& items, vector<int>& nums) {
    unordered_set<int> setNums(nums.begin(), nums.end());

    for (const auto& num : setNums) {
        if (items.count(num) && !pushed.count(num)) {
            resp.push_back(num);
            pushed.insert(num);
        } else items.insert(num);
    }
}

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_set<int> items(nums1.begin(), nums1.end());

    vector<int> resp;

    processor(resp, items, nums2);

    processor(resp, items, nums3);

    return resp;
}

int main()
{
  
  return 0;
}

/*
Example 1:

Input: nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
Output: [3,2]
Explanation: The values that are present in at least two arrays are:
- 3, in all three arrays.
- 2, in nums1 and nums2.
Example 2:

Input: nums1 = [3,1], nums2 = [2,3], nums3 = [1,2]
Output: [2,3,1]
Explanation: The values that are present in at least two arrays are:
- 2, in nums2 and nums3.
- 3, in nums1 and nums2.
- 1, in nums1 and nums3.
Example 3:

Input: nums1 = [1,2,2], nums2 = [4,3,3], nums3 = [5]
Output: []
Explanation: No value is present in at least two arrays.
 

Constraints:

1 <= nums1.length, nums2.length, nums3.length <= 100
1 <= nums1[i], nums2[j], nums3[k] <= 100
*/
