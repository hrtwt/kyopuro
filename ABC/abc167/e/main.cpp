#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

const int mod = 998244353;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<vector<int>> dp(n + 1, vector<int>(k + 1));

  dp[1][0] = m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= k; j++) {
      dp[i + 1][j] = max(dp[i + 1][j], ((m - 1) * dp[i][j]) % mod);
      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], (m * dp[i][j]) % mod);
    }
  }

  int ans = 0;
  for (int i = 0; i < k + 1; i++) {
    ans += dp[n][i] % mod;
    ans %= mod;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
