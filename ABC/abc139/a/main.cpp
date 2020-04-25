#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  int cnt = 0;
  for (int i = 0; i < 3; i++) {
    if (s1[i] == s2[i]) {
      ++cnt;
    }
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
