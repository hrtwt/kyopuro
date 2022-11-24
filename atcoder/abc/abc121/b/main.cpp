#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m, c;
  cin >> n >> m >> c;

  vector<int> b(m);
  for (int &a : b) {
    cin >> a;
  }
  int ans = 0;
  for (size_t i = 0; i < n; i++) {
    int sum = c;
    for (int bi : b) {
      int a;
      cin >> a;
      sum += a * bi;
    }
    if (sum > 0) {
      ++ans;
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
