#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int inv(int k, int mod) {
  int a = k, b = mod, u = 1, v = 0, t;
  while (b > 0) {
    t = a / b;
    swap(a -= t * b, b);
    swap(u -= t * v, v);
  }
  return u;
}

void solve() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, s, k;
    cin >> n >> s >> k;

    ll in = inv(k, n);
    if (in == 1) {
      cout << -1 << endl;
      continue;
    }

    ll ans = -s * in;

    while (ans < 0) {
      ans += n;
    }

    ans %= n;
    cout << ans << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
