#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m);
  int cnt = 0;
  for (ll i = 0; i < m; i++) {
    ll in;
    cin >> in;
    cnt += in;
  }
  cout << (n >= cnt ? n - cnt : -1) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
