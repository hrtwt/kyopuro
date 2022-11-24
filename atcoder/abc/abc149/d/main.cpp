#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  string str;
  cin >> str;

  const auto get_point = [=](char c) {
    switch (c) {
      case 'r':
        return p;
      case 's':
        return r;
      case 'p':
        return s;
    }
  };
  vector<vector<char>> st(k);
  for (int i = 0; i < n; i++) {
    st[i % k].push_back(str[i]);
  }

  ll ans = 0;
  for (auto& ss : st) {
    ans += get_point(ss[0]);
    int l = 0;
    for (int i = 1; i < ss.size(); i++) {
      if (ss[i] == ss[i - 1]) {
        ++l;
      } else {
        l = 0;
      }
      if (l % 2 == 0) {
        ans += get_point(ss[i]);
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
