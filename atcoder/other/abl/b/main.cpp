#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  unsigned long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (b < c || d < a) {
    cout << "No\n";
    return;
  }
  cout << "Yes\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
