#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
  map<string, int> score{
      {"Faatikh", 100},
      {"Andre", 90},
      {"Pundul", 80},
      {"Jaki", 75},
  };

  unordered_map<string, int> score_unordered{
      {"Faatikh", 100},
      {"Andre", 90},
      {"Pundul", 80},
      {"Jaki", 75},
  };

  map<string, int>::iterator i;

  for (i = score.begin(); i != score.end(); i++) {
    cout << i->second << " ";
  }
  for (i = score.begin(); i != score.end(); i++) {
    cout << i->second << " ";
  }
  return 0;
}
