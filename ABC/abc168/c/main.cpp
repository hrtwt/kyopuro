#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;

  double t = abs(h / 6.0 + m / 360.0 - m / 30.0) * M_PI;
  // t = min(t, 2 * M_PI - t);

  double ans = sqrt(a * a + b * b - 2 * a * b * cos(t));
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
