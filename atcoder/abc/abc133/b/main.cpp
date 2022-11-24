#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < d; j++) {
      cin >> x[i][j];
    }
  }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double dsum = 0;
      for (int k = 0; k < d; k++) {
        dsum += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }

      const int di = sqrt(dsum);
      if (di * di == dsum) {
        ++cnt;
      }
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
