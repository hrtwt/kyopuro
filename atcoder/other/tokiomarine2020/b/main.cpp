#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  Bint a, b, v, w, t;
  cin >> a >> v >> b >> w >> t;

  bool y = false;

  if (a < b) {
    if (b + w * t <= a + v * t) {
      y = true;
    }
  } else if (a == b) {
    y = true;
  } else {
    if (b - w * t >= a - v * t) {
      y = true;
    }
  }

  if (y) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
