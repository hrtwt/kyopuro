#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

map<int64_t, int> prime_factor(int64_t n) {
  map<int64_t, int> ret;
  for (int64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}
void solve() {
  int64_t n;
  cin >> n;

  int64_t ans = 0;

  for (int i = 1; i <= n; i++) {
    int64_t s = 1;
    for (auto& t : prime_factor(i)) {
      s *= t.second + 1;
    }
    ans += (int64_t)i * s;
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
