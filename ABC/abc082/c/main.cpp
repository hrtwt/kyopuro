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
  unordered_map<ll, int> bk;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ++bk[x];
  }

  int cnt = 0;
  for (auto &a : bk) {
    if (a.first > a.second) {
      cnt += a.second;
    } else if (a.first < a.second) {
      cnt += a.second - a.first;
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
