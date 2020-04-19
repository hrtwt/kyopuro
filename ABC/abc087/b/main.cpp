#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for (int i = 0; i < a + 1; ++i) {
    for (int j = 0; j < b + 1; ++j) {
      for (int k = 0; k < c + 1; ++k) {
        if (500 * i + 100 * j + 50 * k == x) ++ans;
      }
    }
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
