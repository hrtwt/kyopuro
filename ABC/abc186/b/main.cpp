#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int h, w;
  cin >> h >> w;

  int a[w][h];

  int mi = 1000;
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cin >> a[i][j];
      if (a[i][j] < mi) {
        mi = a[i][j];
      }
    }
  }

  int ans = 0;

  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      if (a[i][j] > mi) {
        ans += a[i][j] - mi;
      }
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
