#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

struct Edge {
  int to;
};

using Graph = vector<vector<Edge>>;

vector<bool> seen;

void dfs(const Graph &G, int v) {
  seen[v] = true;
  for (auto e : G[v]) {
    if (!seen[e.to]) {
      dfs(G, e.to);
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;

  Graph G(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back({b});
    G[b].push_back({a});
  }
  seen.assign(n, false);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (!seen[i]) {
      dfs(G, i);
      cnt++;
    }
  }
  cout << cnt - 1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
