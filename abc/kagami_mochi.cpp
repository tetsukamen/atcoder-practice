#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d_arr(n);
  for (int i = 0; i < n; i++) {
    cin >> d_arr.at(i);
  }

  sort(d_arr.begin(), d_arr.end(), greater<int>());

  int prev;
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      prev = d_arr.at(i);
      count++;
    } else {
      if (d_arr.at(i) < prev) {
        prev = d_arr.at(i);
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}