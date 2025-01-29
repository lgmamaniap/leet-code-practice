// 225. Implement Stack using Queues
#include <iostream>
#include <queue>

using namespace std;

class MyStack
{
private:
  queue<int> q;

public:
  MyStack()
  {
  }

  void push(int x)
  {
    queue<int> aux;
    aux.push(x);
    while (!q.empty())
    {
      aux.push(q.front());
      q.pop();
    }
    q = aux;
  }

  int pop()
  {
    int top = q.front();
    q.pop();
    return top;
  }

  int top()
  {
    return q.front();
  }

  bool empty()
  {
    return q.empty();
  }
};

int main() {
  return 0;
}

/*
Example 1:

Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False
 

Constraints:

1 <= x <= 9
At most 100 calls will be made to push, pop, top, and empty.
All the calls to pop and top are valid.
*/