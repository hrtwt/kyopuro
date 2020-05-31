#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      cout << 0 << endl;
      return;
    }
  }

  Bint sum = 1;
  for (int i = 0; i < n; i++) {
    sum *= a[i];
    if (sum < 0 || sum > 1000000000000000000) {
      cout << -1 << endl;
      return;
    }
  }

  cout << sum << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
