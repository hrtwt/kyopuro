#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  long long l, r;
  cin >> l >> r;
  long long ans = ((l % 2019) * (r % 2019)) % 2019;

  for (long long i = l; i <= r; i++) {
    for (long long j = i + 1; j <= r; j++) {
      ans = min(ans, ((i % 2019) * (j % 2019) % 2019));
      if (ans == 0) {
        cout << 0 << endl;
        return;
      }
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
