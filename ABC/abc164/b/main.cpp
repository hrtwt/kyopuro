#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a > 0 && c > 0) {
    c -= b;
    if (c <= 0) {
      cout << "Yes\n";
      return;
    }
    a -= d;
    if (a <= 0) {
      cout << "No\n";
      return;
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
