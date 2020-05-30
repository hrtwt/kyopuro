#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  n %= 26;
  for (char& c : s) {
    c += n;
    if (c > 'Z') {
      c = 'A' + c - 'Z' - 1;
    }
  }
  cout << s << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
