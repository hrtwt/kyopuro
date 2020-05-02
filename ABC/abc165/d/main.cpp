#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  ll a, b, n;
  cin >> a >> b >> n;

  ll ma = 0;

  for (ll i = 3 * n / 4; i <= n; i++) {
    ma = max(ma, (ll)(floor(a * i / b) - a * floor(i / b)));
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
