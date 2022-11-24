#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  vector<int> v(2019);

  // int t = s[0] - '0';
  // int ten = 10;
  // ++v[t];

  int t = 0, ten = 1;
  ++v[t];

  for (auto &c : s) {
    t += ten * (c - '0');
    t %= 2019;
    ++v[t];
    ten *= 10;
    ten %= 2019;
  }

  ll ans = 0;
  for (int i : v) {
    ans += i * (i - 1) / 2;
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
