#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

map<int64_t, int> prime_factor(int64_t n) {
  map<int64_t, int> ret;
  for (int64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}

void solve() {
  ll n;
  cin >> n;

  auto p = prime_factor(n);

  ll res = 0;
  for (auto t : p) {
    int cnt = 1;
    while (t.second >= cnt) {
      t.second -= cnt;
      ++cnt;
    }
    res += cnt - 1;
  }
  cout << res << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
