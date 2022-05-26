#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a_arr(n);
  for (int i = 0; i < n; i++) {
    cin >> a_arr.at(i);
  }

  sort(a_arr.begin(), a_arr.end(), greater<int>());

  int result = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      result += a_arr.at(i);
    } else {
      result -= a_arr.at(i);
    }
  }

  cout << result << endl;
  return 0;
}