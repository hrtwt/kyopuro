#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      cout << "Bad\n";
      return;
    }
  }
  cout << "Good\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
