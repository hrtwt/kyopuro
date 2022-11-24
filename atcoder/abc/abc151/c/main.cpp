#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<bool> ac(n + 1, false);
  vector<int> wa(n + 1, 0);
  for (int i = 0; i < m; i++) {
    int p;
    string s;
    cin >> p >> s;

    if (s == "AC") {
      ac[p] = true;
      continue;
    }

    if (!ac[p]) {
      ++wa[p];
    }
  }
  int nac = 0, nwa = 0;
  for (int i = 1; i <= n; i++) {
    if (ac[i]) {
      ++nac;
      nwa += wa[i];
    }
  }
  cout << nac << ' ' << nwa << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
