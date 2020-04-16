#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
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
  unordered_set<int> r;
  unordered_set<int> g;
  unordered_set<int> b;

  char c;
  for (int i = 0; i < n; ++i) {
    cin >> c;
    if (c == 'R') {
      r.insert(i);
    } else if (c == 'G') {
      g.insert(i);
    } else if (c == 'B') {
      b.insert(i);
    }
  }

  int ans = 0;
  for (auto i : r) {
    for (auto j : g) {
      for (auto k : b) {
        const int mi = min(i, min(j, k));
        const int ma = max(i, max(j, k));
        // int mo = i + j + k - mi - ma;
        if (2 * (i + j + k - mi - ma) != mi + ma) {
          ++ans;
        }
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
