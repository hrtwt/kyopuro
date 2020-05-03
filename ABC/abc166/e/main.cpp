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
  multimap<ll, int> a;

  for (int i = 0; i < n; i++) {
    ll in;
    cin >> in;
    a.insert({in, i});
  }

  int cnt = 0;
  for (auto it = a.begin(); it != a.end(); it = next(it)) {
    for (auto itt = it; itt != a.end(); itt = next(itt)) {
      if (abs(itt->second - it->second) == itt->first + it->first) {
        ++cnt;
      }
      if (itt->first + it->first > n) {
        break;
      }
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
