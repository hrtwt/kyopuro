#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int x, y;
  cin >> x >> y;
  if ((y - 2 * x) % 2 == 0 && y - 2 * x >= 0 && y % 2 == 0 &&
      2 * x - y / 2 >= 0) {
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
