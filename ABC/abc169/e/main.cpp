#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n + 1), b(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }

  whole(sort, a);
  whole(sort, b);

  ll res;

  if (n % 2 == 1) {
    res = b[(n + 1) / 2] - a[(n + 1) / 2] + 1;
  } else {
    res = (b[n / 2] + b[n / 2 + 1]) - (a[n / 2] + a[n / 2 + 1]) + 1;
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
