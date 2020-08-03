#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> edge(n);
  vector<unordered_set<int>> g(n);

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    edge[i] = {a, b};
    g[a].insert(i);
    g[b].insert(i);
  }

  vector<int> ans(n, -1);
  vector<int> dist(n, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);
  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int eid : g[v]) {
      // colorlize edge
      // push next node
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
