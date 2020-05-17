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
  int t = n % 10;
  if (t == 2 || t == 4 || t == 5 || t == 7 || t == 9) {
    cout << "hon\n";
  } else if (t == 0 || t == 1 || t == 6 || t == 8) {
    cout << "pon\n";
  } else {
    cout << "bon\n";
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
