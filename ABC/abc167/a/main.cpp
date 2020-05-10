#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  string s, t;
  cin >> s >> t;
  bool b = true;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i]) b = false;
  }
  if (s.size() + 1 != t.size()) b = false;

  if (b)
    cout << "Yes\n";
  else
    cout << "No\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
