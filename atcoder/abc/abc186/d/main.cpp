#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  ll a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, greater<ll>());

  ll ans = 0;

  ll c = n - 1;
  for (int i = 0; i < n / 2; i++) {
    ans += a[i] * c;
    c -= 2;
  }

  c = n - 1;
  for (int i = 0; i < n / 2; i++) {
    ans -= a[n - i - 1] * c;
    c -= 2;
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
