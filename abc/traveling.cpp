#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int> > track(n, vector<int>(3));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> track.at(i).at(j);
    }
  }

  vector<int> current_p(3, 0);

  for (int i = 0; i < n; i++) {
    vector<int> next_p = track.at(i);
    int time_diff = next_p.at(0) - current_p.at(0);
    int distance_diff = abs(next_p.at(1) - current_p.at(1)) +
                        abs(next_p.at(2) - current_p.at(2));
    if (time_diff < distance_diff || (time_diff - distance_diff) % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
    current_p = next_p;
  }
  cout << "Yes" << endl;
  return 0;
}