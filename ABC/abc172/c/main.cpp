#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n + 1), b(m + 1);
  cin >> a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  cin >> b[0];
  for (int i = 1; i < m; i++) {
    cin >> b[i];
    b[i] += b[i - 1];
  }

  int ans = 0;
  int j = m - 1;
  for (int i = 0; i < n; i++) {
    while (j >= 0 && a[i] + b[j] > k) {
      j--;
    }
    if (j < 0) break;
    ans = max(ans, i + j + 2);
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
