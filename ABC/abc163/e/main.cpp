#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

void solve() {
  int n;
  cin >> n;
  vector<pair<ll, int>> a(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[i] = {x, i};
  }
  sort(a.begin(), a.end(), greater<>());

  vector<vector<ll>> dp(n + 1, vector<ll>(n + 1));
  for (int x = 0; x < n; x++) {
    for (int y = 0; x + y < n; y++) {
      chmax(dp[x + 1][y], dp[x][y] + a[x + y].first * abs(a[x + y].second - x));
      chmax(dp[x][y + 1],
            dp[x][y] + a[x + y].first * abs(a[x + y].second - (n - y - 1)));
    }
  }
  ll ma = 0;
  for (int i = 0; i < n; i++) {
    chmax(ma, dp[i][n - i]);
  }
  cout << ma << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
