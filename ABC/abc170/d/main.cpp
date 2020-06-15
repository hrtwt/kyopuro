#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> b;
  unordered_set<int> c;
  vector<bool> d(1e6 + 1, true);
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    ++b[t];
    c.insert(t);
  }

  for (auto &i : c) {
    int t = 2;
    while (i * t <= 1e6) {
      d[i * t] = false;
      ++t;
    }
  }

  int ans = 0;
  for (auto &i : c) {
    if (b[i] == 1 && d[i]) ++ans;
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
