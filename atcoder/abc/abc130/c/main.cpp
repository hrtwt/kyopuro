#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  double w, h, x, y;
  cin >> w >> h >> x >> y;
  if (x == w / 2 and y == h / 2) {
    cout << w * h / 2 << ' ' << 1 << endl;
  } else {
    cout << w * h / 2 << ' ' << 0 << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
