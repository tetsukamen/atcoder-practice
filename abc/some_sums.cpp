#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int result = 0;

  for (int i = 1; i <= n; i++) {
    string num_str = to_string(i);
    int sum = 0;
    for (int j = 0; j < num_str.size(); j++) {
      sum += num_str.at(j) - '0';
    }
    if (sum >= a && sum <= b) {
      result += i;
    }
  }
  cout << result << endl;
  return 0;
}