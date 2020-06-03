#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int a, b;
  cin >> a >> b;

  if (a <= 9 && b <= 9) {
    cout << a * b << endl;
  } else {
    cout << -1 << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
