// 234. Palindrome Linked List
#include <iostream>

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode *head)
{
  int nums[100005] = {0};
  int idx = 0;

  ListNode *curr = head;
  while (curr != nullptr)
  {
    nums[idx++] = curr->val;
    curr = curr->next;
  }

  for (int i = 0, j = idx - 1; i * 2 <= idx; i++, j--) {
    if (nums[i] != nums[j]) return false;
  }

  return true;
}

int main()
{
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(2);
  head->next->next->next = new ListNode(1);
  bool res = isPalindrome(head);
  cout << res << endl;

  ListNode *test2 = new ListNode(1);
  test2->next = new ListNode(2);
  res = isPalindrome(test2);
  cout << res << endl;

  return 0;
}

/*
Example 1:
Input: head = [1,2,2,1]
Output: true


Example 2:
Input: head = [1,2]
Output: false


Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
*/