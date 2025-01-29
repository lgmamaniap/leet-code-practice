// 206. Reverse Linked List
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

ListNode *reverseList(ListNode *head)
{
  ListNode *prev = nullptr; // Nuevo último nodo (inicialmente nullptr)
  ListNode *current = head; // Puntero para recorrer la lista

  while (current != nullptr)
  {
    ListNode *nextNode = current->next; // Guardamos el siguiente nodo
    current->next = prev;               // Invertimos el puntero

    // Avanzamos los punteros
    prev = current;
    current = nextNode;
  }

  return prev; // `prev` es el nuevo head de la lista invertida
}

ListNode *reverseListRecursive(ListNode *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  ListNode *temp = reverseListRecursive(head->next);
  head->next->next = head;
  head->next = NULL;
  return temp;
}

int main()
{
  return 0;
}

/*
Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]


Example 2:
Input: head = [1,2]
Output: [2,1]


Example 3:
Input: head = []
Output: []


Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
*/