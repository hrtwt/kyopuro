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
  vector<ll> h(n);
  vector<unordered_set<int>> path(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    path[a].insert(b);
    path[b].insert(a);
  }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    bool good = true;
    for (auto& p : path[i]) {
      if (h[i] <= h[p]) {
        good = false;
        break;
      }
    }
    if (good) ++cnt;
  }
  cout << cnt << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
