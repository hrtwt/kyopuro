#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b(n, 0);

  for (int t = 0; t < k; t++) {
    for (int i = 0; i < n; i++) {
      const int l = max(0, i - a[i]);
      const int r = min(n - 1, i + a[i]);
      ++b[l];
      if (r + 1 < n) --b[r + 1];
    }

    for (int i = 0; i < n - 1; i++) {
      b[i + 1] += b[i];
    }

    int mi = b[0];
    for (int i = 0; i < n; i++) {
      a[i] = b[i];
      mi = min(mi, b[i]);
      b[i] = 0;
    }
    if (mi == n) break;
  }

  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << ' ';
  }
  cout << a[n - 1] << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
