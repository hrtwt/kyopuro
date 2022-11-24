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

  if (n == 1) {
    cout << "0\n";
    return;
  }

  int ma = 0;
  int cnt = 0;
  ll h, oh;
  cin >> oh >> h;
  if (h <= oh) {
    cnt = 1;
    ma = 1;
  }
  oh = h;

  for (int i = 2; i < n; i++) {
    cin >> h;
    if (h <= oh) {
      ++cnt;
    } else {
      ma = max(ma, cnt);
      cnt = 0;
    }
    oh = h;
  }
  cout << max(ma, cnt) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
