#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = int64_t;

const int mod = 1e9 + 7;

void solve() {
  int k, n;
  cin >> n >> k;

  auto sum = [](ll t) -> ll { return t * (t + 1) / 2; };

  ll cnt = 0;
  const ll sumall = sum(n);
  for (int i = k; i <= n; i++) {
    const ll ma = sumall - sum(n - i);
    const ll mi = sum(i - 1) % mod;
    cnt += ma - mi + 1 % mod;
  }
  ++cnt;

  cout << (cnt % mod) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
