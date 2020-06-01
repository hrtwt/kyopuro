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

  ll ans = 0;
  for (auto i : r) {
    for (auto j : g) {
      int t = b.size();
      if (b.find(2 * i - j) != b.end()) --t;
      if (b.find(2 * j - i) != b.end()) --t;
      if ((i + j) % 2 == 0 && b.find((i + j) / 2) != b.end()) --t;
      ans += max(0, t);
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
