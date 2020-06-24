#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n, x;
  cin >> n >> x;
  int d = 0, cnt = 1;
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    d += l;
    if (d <= x) {
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
