// 1974. Minimum Time to Type Word Using Special Typewriter

#include <iostream>

using namespace std;

int minTimeToType(string word) {
    char last = 'a';
    int resp = 0;
    for (char i : word) {
        int hor = abs(i - last);
        int antiHor = abs((min(last, i) + 26) - max(last, i));
        resp += min(hor, antiHor) + 1;
        last = i;
    }
    
    return resp;
}

int main()
{
  
  return 0;
}

/*
Example 1:

Input: word = "abc"
Output: 5
Explanation: 
The characters are printed as follows:
- Type the character 'a' in 1 second since the pointer is initially on 'a'.
- Move the pointer clockwise to 'b' in 1 second.
- Type the character 'b' in 1 second.
- Move the pointer clockwise to 'c' in 1 second.
- Type the character 'c' in 1 second.
Example 2:

Input: word = "bza"
Output: 7
Explanation:
The characters are printed as follows:
- Move the pointer clockwise to 'b' in 1 second.
- Type the character 'b' in 1 second.
- Move the pointer counterclockwise to 'z' in 2 seconds.
- Type the character 'z' in 1 second.
- Move the pointer clockwise to 'a' in 1 second.
- Type the character 'a' in 1 second.
Example 3:

Input: word = "zjpc"
Output: 34
Explanation:
The characters are printed as follows:
- Move the pointer counterclockwise to 'z' in 1 second.
- Type the character 'z' in 1 second.
- Move the pointer clockwise to 'j' in 10 seconds.
- Type the character 'j' in 1 second.
- Move the pointer clockwise to 'p' in 6 seconds.
- Type the character 'p' in 1 second.
- Move the pointer counterclockwise to 'c' in 13 seconds.
- Type the character 'c' in 1 second.
 

Constraints:

1 <= word.length <= 100
word consists of lowercase English letters.
*/

