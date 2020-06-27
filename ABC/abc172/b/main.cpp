#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  string s, t;
  cin >> s >> t;

  int snt = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i]) ++snt;
  }

  cout << snt << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
