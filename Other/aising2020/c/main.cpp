#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;

  vector<int> ans(n + 1);

  const auto f = [](int x, int y, int z) {
    return (x + y + z) * (x + y + z) - x * y - y * z - z * x;
  };

  for (int i = 1; i < n / 3; i++) {
    for (int j = 1; j < n / 3; j++) {
      for (int k = 1; k < n / 3; k++) {
        const int a = f(i, j, k);
        if (a <= n)
          ++ans[a];
        else
          break;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << ans[i] << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
