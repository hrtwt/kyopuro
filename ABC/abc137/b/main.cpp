#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int k, x;
  cin >> k >> x;

  for (int i = x - k + 1; i < x + k - 1; i++) {
    cout << i << ' ';
  }
  cout << x + k - 1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
