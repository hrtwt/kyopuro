#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<uint64_t> s(n), t(n), u(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    if (s[i] == 0) {
      s[i] = ~0;
    } else {
      s[i] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> t[i];
    if (t[i] == 0) {
      t[i] = ~0;
    } else {
      t[i] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> u[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  vector<uint64_t> dec(n);
  vector<vector<uint64_t>> ans(n, vector<uint64_t>(n));

  for (int i = 0; i < n; i++) {
    const uint64_t mask = s[i] & u[i];
    dec[i] |= mask;
    dec[i] |= ~(s[i] | u[i]);
    for (int j = 0; j < n; j++) {
      ans[j][i] |= mask;
    }
  }

  for (int i = 0; i < n; i++) {
    const uint64_t mask = t[i] & v[i];
    const uint64_t decMask = mask | ~(t[i] | v[i]);
    for (int j = 0; j < n; j++) {
      ans[i][j] |= mask;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[j][i];
      if (j != n - 1) {
        cout << ' ';
      }
    }
    cout << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
