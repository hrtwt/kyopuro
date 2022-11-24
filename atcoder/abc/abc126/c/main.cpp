#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  double res = 0;

  for (int i = 1; i <= n; i++) {
    res += i < k ? pow(1.0 / 2, ceil(log2(k) - log2(i))) / n : 1.0 / n;
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
