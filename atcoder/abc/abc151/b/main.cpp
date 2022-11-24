#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m, k;
  cin >> n >> k >> m;
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    int t;
    cin >> t;
    sum += t;
  }
  int ans = max(m * n - sum, 0);
  if (ans > k) ans = -1;
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
