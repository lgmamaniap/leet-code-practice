// 1805. Number of Different Integers in a String
#include <iostream>
#include <unordered_set>

using namespace std;

string deleteZeros(string number) {
  if (number.size() == 1 && number != "0") return number;
    int idx = 0;
    while(idx < number.size()) {
      if (number[idx] != '0') break;
      idx++;
    }
    if (idx == number.size()) return "0";
    return number.substr(idx);
}

int numDifferentIntegers(string word) {
  string aux = "";
  unordered_set<string> nums;
  for (int i = 0; i < word.size(); i++) {
    if (word[i] >= '0' && word[i] <= '9') {
      aux += word[i];
    } else {
      if (aux.size() > 0) {
        nums.insert(deleteZeros(aux));
        aux = "";
      }
    }
  }
  if (aux.size() > 0) nums.insert(deleteZeros(aux));
  return nums.size();
}

int main()
{
  cout << numDifferentIntegers("a123bc34d8ef34") << endl;
  cout << numDifferentIntegers("leet1234code234") << endl;
  cout << numDifferentIntegers("a1b01c001") << endl;
  cout << numDifferentIntegers("2t534241200048821186703855206305519741412814322625714669955759026901002406955031068784h534241200048821186703855206305519741412814322625714669955759026901002406955031068784g534241200048821186703855206305519741412814322625714669955759026901002406955031068784i534241200048821186703855206305519741412814322625714669955759026901002406955031068784au29q9d4o3ui7xiewh4tikuki1zzq7ebe42asjfb9qi04bqskgagdqdw2k21hu98kczsdblci19744r") << endl;
  return 0;
}

/*
 Example 1:

  Input: word = "a123bc34d8ef34"
  Output: 3
  Explanation: The three different integers are "123", "34", and "8". Notice that "34" is only counted once.
  Example 2:

  Input: word = "leet1234code234"
  Output: 2
  Example 3:

  Input: word = "a1b01c001"
  Output: 1
  Explanation: The three integers "1", "01", and "001" all represent the same integer because
  the leading zeros are ignored when comparing their decimal values.
 * */
