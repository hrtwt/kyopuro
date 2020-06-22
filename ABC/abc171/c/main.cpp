#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;

  int di = 1;
  while (n > pow(26, di)) {
    n -= pow(26, di);
    ++di;
  }

  --n;

  vector<int> r(di);
  for (int i = 0; i < di; ++i) {
    r[i] = n % 26;
    n /= 26;
  }

  for (int i = di - 1; i >= 0; --i) {
    cout << (r[i] == 0 ? 'a' : (char)('a' + r[i]));
  }

  cout << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
