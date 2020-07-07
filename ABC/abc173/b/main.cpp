#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int ac = 0, wa = 0, tle = 0, re = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "AC") {
      ++ac;
    } else if (s == "WA") {
      ++wa;
    } else if (s == "TLE") {
      ++tle;
    } else {
      ++re;
    }
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
