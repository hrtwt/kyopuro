#include <bits/stdc++.h>

#define ALL(c) std::begin(c), std::end(c)

using namespace std;
using ll = long long;

void solve() {
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < 1300; i++) {
    if (floor(i * 0.08) == a && floor(i * 0.1) == b) {
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
