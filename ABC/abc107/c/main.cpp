#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  ll ans = numeric_limits<ll>::max();

  for (int i = 0; i + k - 1 < n; i++) {
    const ll l = x[i], r = x[i + k - 1];
    ans = min(ans, min(abs(l), abs(r)) + r - l);
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
