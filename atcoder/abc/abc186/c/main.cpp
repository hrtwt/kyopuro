#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;

  int ans = 0;

  for (int i = 1; i <= n; i++) {
    if (to_string(i).find('7') != string::npos) {
      continue;
    }
    stringstream ss;
    ss << oct << i;
    if (ss.str().find('7') != string::npos) {
      continue;
    }

    ++ans;
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
