// 1720. Decode XORed Array
#include <iostream>
#include <vector>

using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
  vector<int> resp;
  resp.push_back(first);

  for (int i = 0; i < encoded.size(); i++)
    resp.push_back(resp[i] ^ encoded[i]);

  return resp;
}

int main()
{
  vector<int> encoded = {1, 2, 3};
  vector<int> resonse = decode(encoded, 1);

  for (int i = 0; i < resonse.size(); i++)
    cout << resonse[i];
  cout << endl;

  return 0;
}