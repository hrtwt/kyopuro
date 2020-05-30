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
  int d;

  if (s[0] == 'S')
    if (s[1] == 'U')
      d = 7;
    else
      d = 1;
  else if (s[0] == 'M') {
    d = 6;
  } else if (s[0] == 'T') {
    if (s[1] == 'U')
      d = 5;
    else
      d = 3;
  } else if (s[0] == 'W') {
    d = 4;
  } else
    d = 2;

  cout << d << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
