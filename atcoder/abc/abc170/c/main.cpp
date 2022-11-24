#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int x, n;
  cin >> x >> n;

  if (n == 0) {
    cout << x << endl;
    return;
  }

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());

  int ans = 0;
  int id = 0;
  for (int i = 0; i < 102; i++) {
    if (i == p[id]) {
      ++id;
      continue;
    }

    if (abs(x - ans) > abs(x - i)) {
      ans = i;
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
