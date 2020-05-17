#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

bool is_prime(int64_t x) {
  for (int64_t i = 2; i * i <= x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

void solve() {
  int x;
  cin >> x;
  while (!is_prime(x)) {
    ++x;
  }
  cout << x << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
