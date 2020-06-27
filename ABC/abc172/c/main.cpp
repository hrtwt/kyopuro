#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  vector<vector<ll>> dp(n + 1, vector(m + 1, k + 1));
  dp[0][0] = 0;
  dp[1][0] = a[0];
  dp[0][1] = b[0];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);
      dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + b[j]);
    }
  }

  dp[n][m] = min(dp[n - 1][m] + a[n - 1], dp[n][m - 1] + b[m - 1]);

  ll cnt = 0;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      if (dp[i][j] > k) break;

      cnt = max(cnt, (ll)i + j);
    }
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
