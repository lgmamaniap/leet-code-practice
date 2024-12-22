// 1790. Check if One String Swap Can Make Strings Equal

#include<iostream>
#include<map>

using namespace std;

bool checkSwap(string s1, string s2) {
  map<string, int> swapMap;
  bool swap = false;
  int counter = 0;
  for(int i = 0; i < s1.size(); i++) {
    if (s1[i] == s2[i]) continue;

    counter++;
    if (counter > 2) return false;

    string inverse(1, s2[i]);
    inverse += s1[i];

    string key(1, s1[i]);
    key += s2[i];

    if (swapMap.count(inverse)) swap = true;

    swapMap[key] = i;
  }
  if (counter == 0) return true;
  return counter == 2 && swap;
}

int main() {
  cout << checkSwap("bank", "kanb") << endl;
  cout << false << endl;
  return 0;
}
