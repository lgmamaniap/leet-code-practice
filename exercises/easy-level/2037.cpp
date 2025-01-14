// 2037. Minimum Number of Moves to Seat Everyone
#include <iostream>
#include <vector>

using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    const int maxPosition = 100;
    vector<int> seatCount(maxPosition + 1, 0);
    vector<int> studentCount(maxPosition + 1, 0);
    
    for (int seat : seats) {
        seatCount[seat]++;
    }
    
    for (int student : students) {
        studentCount[student]++;
    }
    
    int seatIdx = 0;
    int studentIdx = 0;
    int moves = 0;
    
    while (seatIdx <= maxPosition && studentIdx <= maxPosition) {
        while (seatIdx <= maxPosition && seatCount[seatIdx] == 0) {
            seatIdx++;
        }
        while (studentIdx <= maxPosition && studentCount[studentIdx] == 0) {
            studentIdx++;
        }
        
        if (seatIdx <= maxPosition && studentIdx <= maxPosition) {
            int count = min(seatCount[seatIdx], studentCount[studentIdx]);
            moves += count * abs(seatIdx - studentIdx);
            seatCount[seatIdx] -= count;
            studentCount[studentIdx] -= count;
        }
    }
    
    return moves;
}

int main()
{
  vector<int> test11, test12, test21, test22, test31, test32;
  test11 = {3,1,5};
  test12 = {2,7,4};
  cout << minMovesToSeat(test11, test12) << endl;
  
  test21 = {4,1,5,9};
  test22 = {1,3,2,6};
  cout << minMovesToSeat(test21, test22) << endl;
  
  test31 = {2,2,6,6};
  test32 = {1,3,2,6};
  cout << minMovesToSeat(test31, test32) << endl;
  return 0;
}

/*
Example 1:

Input: seats = [3,1,5], students = [2,7,4]
Output: 4
Explanation: The students are moved as follows:
- The first student is moved from position 2 to position 1 using 1 move.
- The second student is moved from position 7 to position 5 using 2 moves.
- The third student is moved from position 4 to position 3 using 1 move.
In total, 1 + 2 + 1 = 4 moves were used.
Example 2:

Input: seats = [4,1,5,9], students = [1,3,2,6]
Output: 7
Explanation: The students are moved as follows:
- The first student is not moved.
- The second student is moved from position 3 to position 4 using 1 move.
- The third student is moved from position 2 to position 5 using 3 moves.
- The fourth student is moved from position 6 to position 9 using 3 moves.
In total, 0 + 1 + 3 + 3 = 7 moves were used.
Example 3:

Input: seats = [2,2,6,6], students = [1,3,2,6]
Output: 4
Explanation: Note that there are two seats at position 2 and two seats at position 6.
The students are moved as follows:
- The first student is moved from position 1 to position 2 using 1 move.
- The second student is moved from position 3 to position 6 using 3 moves.
- The third student is not moved.
- The fourth student is not moved.
In total, 1 + 3 + 0 + 0 = 4 moves were used.
 

Constraints:

n == seats.length == students.length
1 <= n <= 100
1 <= seats[i], students[j] <= 100
*/
