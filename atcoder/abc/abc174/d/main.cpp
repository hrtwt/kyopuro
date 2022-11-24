#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int l = 0, r = n - 1;
  int cnt = 0;
  while (1) {
    while (l < n && s[l] != 'W') ++l;
    while (r >= 0 && s[r] != 'R') --r;
    if (l >= r) break;
    ++l;
    --r;
    ++cnt;
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
