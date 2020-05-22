#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  ll k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll cnt = 0, sum = 0;
  int r = 0;
  for (int l = 0; l < n; l++) {
    while (sum < k && r < n) {
      sum += a[r];
      ++r;
    }
    if (sum < k) break;

    cnt += n - r + 1;

    sum -= a[l];
  }

  cout << cnt << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
