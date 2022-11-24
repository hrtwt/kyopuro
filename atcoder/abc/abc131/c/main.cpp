#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if (a < b) {
    a ^= b;
    b ^= a;
    a ^= b;
  }

  return b ? gcd(b, a % b) : a;
}
// ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  --a;

  const ll ta = a - a / c - a / d + a / lcm(c, d);
  const ll tb = b - b / c - b / d + b / lcm(c, d);
  cout << tb - ta << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
