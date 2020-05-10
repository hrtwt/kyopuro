#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = unsigned long long;

void solve() {
  ll a, b, x;
  cin >> a >> b >> x;

  if (a + b > x) {
    cout << 0 << endl;
    return;
  }

  auto d = [](ll t) {
    unsigned ret = 0;
    while (t > 0) {
      ++ret;
      t /= 10;
    }
    return ret;
  };

  auto canbuy = [=](ll t) { return a * t + b * d(t) <= x; };

  ll left = 1;
  ll right = 1e9 + 1;

  while (right - left > 1) {
    ll mid = (right + left) / 2;
    if (canbuy(mid))
      left = mid;
    else
      right = mid;
  }

  cout << left << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
