#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
  map<string, int> valueMap = {{"type", 1},
                               {"color", 2},
                               {"name", 3}};

  int res = valueMap[ruleKey];
  if (!res)
    return 0;

  int counter = 0;
  for (int i = 0; i < items.size(); i++)
  {
    if (items[i][res - 1] == ruleValue)
      counter++;
  }
  return counter;
}

int main()
{
  // Inicializar el vector de items
  vector<vector<string>> items = {
      {"phone", "blue", "pixel"},
      {"computer", "silver", "lenovo"},
      {"phone", "gold", "iphone"}};

  // Llamar a la función
  int result = countMatches(items, "color", "silver");

  // Imprimir el resultado
  cout << "Counter matches: " << result << endl;
  return 0;
}