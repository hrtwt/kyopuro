#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  ll a, b, k;
  cin >> a >> b >> k;

  if (k <= a) {
    cout << a - k << ' ' << b << endl;

  } else if (k <= a + b) {
    cout << 0 << ' ' << a + b - k << endl;
  } else {
    cout << 0 << ' ' << 0 << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
