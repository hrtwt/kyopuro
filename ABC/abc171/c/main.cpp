#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;

  vector<int> r(11);

  ll s = 1;
  int di = 1;
  while (n >= s) {
    s *= 26;
    ++di;
  }

  for (int i = di; i >= 0; --i) {
    const ll t = pow(26, i);
    r[i] = n / t;
    n %= t;
  }

  int t = di;
  while (r[t] == 0) {
    --t;
  }

  for (int i = 0; i <= t; i++) {
    if (r[i] != 0) continue;

    bool ok = false;
    for (int k = i; k < 11; k++) {
      if (r[k] != 0) {
        ok = true;
        break;
      }
    }
    if (ok == false) break;

    int bs = 1;
    while (r[i + bs] == 0) {
      ++bs;
    }
    --r[i + bs];
    for (int j = bs - 1; j >= 0; --j) {
      r[i + j] = 26;
    }
  }

  t = di;
  while (r[t] == 0) {
    --t;
  }

  for (int i = t; i >= 0; --i) {
    cout << (char)('a' + r[i] - 1);
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
