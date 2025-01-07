// Puertas seguras

#include <iostream>
#include <unordered_set>
#include <string>
#include <map>

using namespace std;

int main() {
  unordered_set<string> events;
  
  map<string, string> responses;
  responses["entrada"] = "entro";
  responses["salida"] = "salio";
  
  int n;
  cin >> n;
  while (n-- > 0) {
    string action, name;
    cin >> action >> name;
    string re = name + " " + responses[action];
    
    if (action == "entrada") {
      if (events.count(name)) {
        re += " (ANOMALIA)";
      }
      events.insert(name);
    }
    
    if (action == "salida") {
      if(!events.count(name)) re += " (ANOMALIA)";
      events.erase(name);
    }
    cout << re << endl;
  }
  return 0;
}
