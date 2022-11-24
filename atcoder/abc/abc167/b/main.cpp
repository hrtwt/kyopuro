#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  if (a > k) {
    cout << k << endl;
    return;
  }
  if (a + b >= k) {
    cout << a << endl;
    return;
  }
  cout << a - (k - a - b) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
