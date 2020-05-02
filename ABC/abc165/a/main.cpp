#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int k, a, b;
  cin >> k >> a >> b;

  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      cout << "OK" << endl;
      return;
    }
  }
  cout << "NG\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
