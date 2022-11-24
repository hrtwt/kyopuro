#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int ans = numeric_limits<int>::max();

  for (int i = 0; i < (1 << n); ++i) {
    int cnt = 0;
    vector<int> s(m);
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        cnt += c[j];
        for (int k = 0; k < m; k++) {
          s[k] += a[j][k];
        }
      }
    }

    bool cl = true;
    for (int t : s) {
      if (t < x) {
        cl = false;
        break;
      }
    }

    if (cl) ans = min(ans, cnt);
  }

  if (ans == numeric_limits<int>::max()) ans = -1;
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
