// 412. Fizz Buzz

#include <iostream>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n)
{
  vector<string> resp;
  for (int i = 1; i <= n; i++)
  {
    bool divThree = i % 3 == 0;
    bool divFive = i % 5 == 0;

    if (divThree && divFive)
    {
      resp.push_back("FizzBuzz");
      continue;
    }

    if (divThree)
    {
      resp.push_back("Fizz");
      continue;
    }

    if (divFive)
    {
      resp.push_back("Buzz");
      continue;
    }
    string str = to_string(i);
    resp.push_back(str);
  }
  return resp;
}

int main()
{
  fizzBuzz(3);
  fizzBuzz(5);
  fizzBuzz(15);
  return 0;
}

/*
Example 1:
Input: n = 3
Output: ["1","2","Fizz"]


Example 2:
Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]


Example 3:
Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]


Constraints:

1 <= n <= 104
*/