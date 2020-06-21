#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n, l;
  cin >> n >> l;
  int sum, mi = abs(l);

  for (int i = 1; i <= n; i++) {
    sum += l + i - 1;
    if (abs(mi) > abs(l + i - 1)) {
      mi = l + i - 1;
    }
  }

  cout << sum - mi << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
