#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  double a, b, x;
  cin >> a >> b >> x;
  const double line = a * a * b / 2.0;
  if (x > line) {
    cout << atan(2 * (a * a * b - x) / (a * a * a)) * 180.0 / M_PI << endl;
  } else if (x == line) {
    cout << 45.00000000 << endl;
  } else {
    cout << atan(a * b * b / 2.0 / x) * 180.0 / M_PI << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(10);

  solve();
  return 0;
}
