// 232. Implement Queue using Stacks

#include <iostream>
#include <stack>

using namespace std;

class MyQueue
{
private:
  stack<int> s;

public:
  MyQueue()
  {
  }

  void push(int x)
  {
    stack<int> aux;
    while (!s.empty())
    {
      aux.push(s.top());
      s.pop();
    }

    s.push(x);
    while (!aux.empty())
    {
      s.push(aux.top());
      aux.pop();
    }
  }

  int pop()
  {
    int res = s.top();
    s.pop();
    return res;
  }

  int peek()
  {
    return s.top();
  }

  bool empty()
  {
    return s.empty();
  }
};

int main()
{
  return 0;
}

/*
Example 1:

Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false


Constraints:

1 <= x <= 9
At most 100 calls will be made to push, pop, peek, and empty.
All the calls to pop and peek are valid.
*/