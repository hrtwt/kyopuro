#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;

void solve() {
  int n;
  cin >> n;
  bitset<200000> x(0);

  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == '1') x.set(i);
  }

}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
