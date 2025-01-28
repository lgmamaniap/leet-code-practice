// 203. Remove Linked List Elements
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

ListNode *removeElements(ListNode *head, int val)
{
  ListNode* resp = nullptr;
  ListNode* tail = nullptr;
  while (head != nullptr)
  {
    if (head->val != val) {
      if (resp == nullptr) {
        resp = new ListNode(head->val);
        tail = resp;
      } else {
        tail->next = new ListNode(head->val);
        tail = tail->next;
      }
    }
    head = head->next;
  }
  return resp;
}

void printResp(ListNode *head) {
  cout << "[";
  while(head != nullptr) {
    cout << head->val << " ";
    head = head->next;
  }
  cout << "]" << endl;
}

int main() {
  ListNode* test1 = new ListNode(1);
  ListNode* tail1 = test1;
  tail1->next = new ListNode(2);
  tail1 = tail1->next;
  tail1->next = new ListNode(6);
  tail1 = tail1->next;
  tail1->next = new ListNode(3);
  tail1 = tail1->next;
  tail1->next = new ListNode(4);
  tail1 = tail1->next;
  tail1->next = new ListNode(5);
  tail1 = tail1->next;
  tail1->next = new ListNode(6);
  printResp(removeElements(test1, 6));

  printResp(removeElements(nullptr, 1));

  ListNode* test3 = new ListNode(7);
  ListNode* tail3 = test3;
  tail3->next = new ListNode(7);
  tail3 = tail3->next;
  tail3->next = new ListNode(7);
  tail3 = tail3->next;
  tail3->next = new ListNode(7);
  printResp(removeElements(test3, 7));

  return 0;
}

/*
Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]


Example 2:

Input: head = [], val = 1
Output: []


Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50
*/