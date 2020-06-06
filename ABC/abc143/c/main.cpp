#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  vector<char> v;
  v.push_back(s[0]);
  for (int i = 1; i < n; i++) {
    if (v[v.size() - 1] != s[i]) v.push_back(s[i]);
  }
  cout << v.size() << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
