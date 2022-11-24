#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int h, w, k;
  cin >> h >> w >> k;

  vector<string> c(h);
  for (int i = 0; i < h; i++) {
    cin >> c[i];
  }

  int ans = 0;

  for (int hbit = 0; hbit < (1 << h); ++hbit) {
    for (int wbit = 0; wbit < (1 << w); wbit++) {
      vector<string> cp(h);
      copy(c.begin(), c.end(), cp.begin());

      for (int i = 0; i < h; ++i) {
        if (hbit & (1 << i)) {
          for (int k = 0; k < w; k++) {
            cp[i][k] = '.';
          }
        }
      }
      for (int j = 0; j < w; j++) {
        if (wbit & (1 << j)) {
          for (int k = 0; k < h; k++) {
            cp[k][j] = '.';
          }
        }
      }

      int cnt = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if (cp[i][j] == '#') ++cnt;
        }
      }

      if (cnt == k) ++ans;
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
