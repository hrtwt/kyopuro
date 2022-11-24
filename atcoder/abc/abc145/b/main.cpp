#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (n % 2 == 0 && s.substr(0, n / 2).compare(s.substr(n / 2)) == 0) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
