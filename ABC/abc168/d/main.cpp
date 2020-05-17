#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> G(n + 1);
  vector<int> prev(n + 1, -1);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist(n + 1, -1);
  queue<int> que;
  dist[1] = 0, que.push(1);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (auto nv : G[v]) {
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        prev[nv] = v;
        que.push(nv);
      }
    }
  }

  bool ok = true;
  for (int i = 2; i <= n; i++) {
    if (prev[i] == -1) {
      ok = false;
      break;
    }
  }

  if (ok) {
    cout << "Yes" << endl;
    for (int i = 2; i <= n; i++) {
      cout << prev[i] << endl;
    }
  } else {
    cout << "No" << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
