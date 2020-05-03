#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<bool> v(n + 1, false);
  for (int i = 0; i < k; i++) {
    int d;
    cin >> d;
    for (int i = 0; i < d; i++) {
      int a;
      cin >> a;
      v[a] = true;
    }
  }
  int cnt = 0;
  for (auto x : v) {
    if (x == false) {
      ++cnt;
    }
  }
  cout << cnt - 1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
