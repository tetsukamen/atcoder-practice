#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> G(N);

  int a, b;
  for (int i = 0; i < M; i++) {
    cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int answer = 0;
  for (int i = 0; i < N; i++) {
    int cnt = 0;
    for (int j = 0; j < G[i].size(); j++) {
      if (i > G[i][j]) ++cnt;
    }
    if (cnt == 1) ++answer;
  }

  cout << answer << endl;
}