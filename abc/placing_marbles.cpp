#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  string n_str = to_string(n);
  int count = 0;
  for (int i = 0; i < n_str.size(); i++) {
    if (n_str.at(i) == '1') {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}