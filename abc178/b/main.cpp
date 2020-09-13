#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll ma = max(a * c, max(a * d, max(b * c, b * d)));

  cout << ma << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
