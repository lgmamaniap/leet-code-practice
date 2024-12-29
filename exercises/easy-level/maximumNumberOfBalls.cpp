// 42. Maximum Number of Balls in a Box
#include <iostream>

using namespace std;

int numberSum(int number)
{
  int sum = 0;
  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int countBalls(int lowLimit, int highLimit)
{
  if (highLimit < 10)
    return 1;

  int acc[50] = {};
  int idx = numberSum(lowLimit);
  int max = 0;
  int counter = lowLimit;
  int reset = lowLimit % 10;

  while (counter <= highLimit)
  {
    for (int i = reset; i < 10; i++)
    {
      if (counter > highLimit) break;
      acc[idx]++;
      if (acc[idx] > max)
        max = acc[idx];
      counter++;
      idx++;
    }
    reset = 0;
    idx -= 9;
    if (counter % 100 == 0)
      idx = numberSum(counter);
  }

  return max;
}

int main()
{
  cout << countBalls(1, 10) << endl;   // 2
  cout << countBalls(5, 15) << endl;   // 2
  cout << countBalls(19, 28) << endl;  // 2
  cout << countBalls(11, 104) << endl; // 9
  cout << countBalls(220, 548) << endl; // 32
  cout << countBalls(1780, 3875) << endl; // 161
  cout << countBalls(8, 16) << endl; // 1
  return 0;
}