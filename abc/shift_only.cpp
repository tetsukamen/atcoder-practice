#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> aArr(n);
  for (int i = 0; i < n; i++) {
    cin >> aArr.at(i);
  }

  int count = 0;

  while (1) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (aArr.at(i) % 2 != 0) {
        flag = 1;
      }
    }
    if (flag == 0) {
      count++;
      for (int i = 0; i < n; i++) {
        aArr.at(i) = aArr.at(i) / 2;
      }
    } else {
      break;
    }
  }

  cout << count << endl;

  return 0;
}