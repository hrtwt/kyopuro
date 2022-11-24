#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, a, b, ans = 0;
  cin >> n >> a >> b;

  for (int i = 0; i <= n; ++i) {
    int k = i;
    int sum = k % 10;
    k /= 10;
    while (k) {
      sum += k % 10;
      k /= 10;
    }
    if (a <= sum && sum <= b) {
      ans += i;
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
