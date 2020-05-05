#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  ll x;
  cin >> x;
  const int lim = 1e3;

  auto pow5 = [](auto t) { return t * t * t * t * t; };

  for (int i = 0; i < lim; i++) {
    for (int j = -lim; j < lim; j++) {
      if (pow5(i) - pow5(j) == x) {
        cout << i << ' ' << j << endl;
        return;
      }
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
