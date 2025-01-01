// 1812. Determine Color of a Chessboard Square
#include <iostream>
#include <map>

using namespace std;

bool squareIsWhite(string coordinates) {
  bool pairValues[9] = {};
  bool flag = false;
  for (int i=1; i<9; i++) {
    pairValues[i] = flag;
    flag = !flag;
  }
  return (coordinates[0] - 'a') % 2 == 0
    ? pairValues[coordinates[1] - '0']
    : !pairValues[coordinates[1] - '0'];
}

int main()
{
  cout << squareIsWhite("a1") << endl;
  cout << squareIsWhite("h3") << endl;
  cout << squareIsWhite("c7") << endl;
  return 0;
}

/*
  Example 1:

  Input: coordinates = "a1"
  Output: false
  Explanation: From the chessboard above, the square with coordinates "a1" is black, so return false.
  
  
  Example 2:

  Input: coordinates = "h3"
  Output: true
  Explanation: From the chessboard above, the square with coordinates "h3" is white, so return true.
  
  
  Example 3:

  Input: coordinates = "c7"
  Output: false
 * */
