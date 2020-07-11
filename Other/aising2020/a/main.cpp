#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int l, r, d;
  cin >> l >> r >> d;

  int cnt = 0;
  for (int i = l; i <= r; i++) {
    if (i % d == 0) {
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
