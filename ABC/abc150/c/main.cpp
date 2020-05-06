#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }

  auto allMatch = [](auto p, auto q, int n) {
    for (int i = 0; i < n; i++) {
      if (p[i] != q[i]) return false;
    }
    return true;
  };

  vector<int> iot(n);

  iota(iot.begin(), iot.end(), 1);
  int cntp = 0;
  do {
    if (allMatch(p, iot, n)) break;
    ++cntp;
  } while (next_permutation(iot.begin(), iot.end()));

  iota(iot.begin(), iot.end(), 1);
  int cntq = 0;
  do {
    if (allMatch(q, iot, n)) break;
    ++cntq;
  } while (next_permutation(iot.begin(), iot.end()));

  cout << abs(cntp - cntq) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
