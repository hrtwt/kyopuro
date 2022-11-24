#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int aa = stoi(s.substr(0, 2));
  int bb = stoi(s.substr(2, 2));

  if (min(aa, bb) >= 13 || (aa == 0 && bb == 0)) {
    cout << "NA\n";
    return;
  }

  if (min(aa, bb) == 0) {
    if (max(aa, bb) <= 12) {
      cout << (aa > bb ? "MMYY\n" : "YYMM\n");
      return;
    } else {
      cout << "NA\n";
      return;
    }
  }

  if (aa <= 12 && bb <= 12) {
    cout << "AMBIGUOUS\n";
    return;
  }

  if (aa >= bb) {
    cout << "YYMM\n";
  } else {
    cout << "MMYY\n";
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
