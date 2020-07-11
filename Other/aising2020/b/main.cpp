#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1 && a[i] % 2 == 1) {
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
