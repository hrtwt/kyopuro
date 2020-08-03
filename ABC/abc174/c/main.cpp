#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int k;
  cin >> k;

  unordered_set<int> s = unordered_set<int>();

  int m = 7 % k;
  int cnt = 1;

  while (m) {
    m = (10 * m + 7) % k;
    if (s.find(m) != s.end()) {
      cout << "-1\n";
      return;
    }
    s.insert(m);
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
