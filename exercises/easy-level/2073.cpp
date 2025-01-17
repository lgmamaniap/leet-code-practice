// 2073. Time Needed to Buy Tickets
#include <iostream>
#include <vector>

using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    int count = 0;
    while(tickets[k] > 0) {
        count++;
        int front = tickets.front() - 1;
        tickets.erase(tickets.begin());

        if (front > 0) tickets.push_back(front);

        if (k == 0 && front == 0) break;

        k--;
        if (k < 0) k = tickets.size() - 1;
    }
    return count;
}

int main()
{
  vector<int> test1, test2;
  test1 = {2,3,2};
  test2 = {5,1,1,1};
  
  cout << timeRequiredToBuy(test1, 2) << endl;
  cout << timeRequiredToBuy(test2, 0) << endl;
  return 0;
}


/*
Example 1:

Input: tickets = [2,3,2], k = 2

Output: 6

Explanation:

The queue starts as [2,3,2], where the kth person is underlined.
After the person at the front has bought a ticket, the queue becomes [3,2,1] at 1 second.
Continuing this process, the queue becomes [2,1,2] at 2 seconds.
Continuing this process, the queue becomes [1,2,1] at 3 seconds.
Continuing this process, the queue becomes [2,1] at 4 seconds. Note: the person at the front left the queue.
Continuing this process, the queue becomes [1,1] at 5 seconds.
Continuing this process, the queue becomes [1] at 6 seconds. The kth person has bought all their tickets, so return 6.



Example 2:

Input: tickets = [5,1,1,1], k = 0

Output: 8

Explanation:

The queue starts as [5,1,1,1], where the kth person is underlined.
After the person at the front has bought a ticket, the queue becomes [1,1,1,4] at 1 second.
Continuing this process for 3 seconds, the queue becomes [4] at 4 seconds.
Continuing this process for 4 seconds, the queue becomes [] at 8 seconds. The kth person has bought all their tickets, so return 8.
 

Constraints:

n == tickets.length
1 <= n <= 100
1 <= tickets[i] <= 100
0 <= k < n
*/
