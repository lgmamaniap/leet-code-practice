// 2011. Final Value of Variable After Performing Operations

#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for (string op : operations) {
        if (op == "X++") x++;
        if (op == "++X") ++x;
        if (op == "X--") x--;
        if (op == "--X") --x;
    }
    return x;
}

int main()
{
  vector<string> test1 = {"--X","X++","X++"};
  vector<string> test2 = {"++X","++X","X++"};
  vector<string> test3 = {"X++","++X","--X","X--"};
  
  cout << finalValueAfterOperations(test1) << endl;
  cout << finalValueAfterOperations(test2) << endl;
  cout << finalValueAfterOperations(test3) << endl;
  return 0;
}


/*
Example 1:

Input: operations = ["--X","X++","X++"]
Output: 1
Explanation: The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
Example 2:

Input: operations = ["++X","++X","X++"]
Output: 3
Explanation: The operations are performed as follows:
Initially, X = 0.
++X: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
X++: X is incremented by 1, X = 2 + 1 = 3.
Example 3:

Input: operations = ["X++","++X","--X","X--"]
Output: 0
Explanation: The operations are performed as follows:
Initially, X = 0.
X++: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
--X: X is decremented by 1, X = 2 - 1 = 1.
X--: X is decremented by 1, X = 1 - 1 = 0.
 

Constraints:

1 <= operations.length <= 100
operations[i] will be either "++X", "X++", "--X", or "X--".
 * */
