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
  unordered_map<ll, int> ad, su;

  ll cnt = 0;

  for (int i = 1; i <= n; i++) {
    ll h;
    cin >> h;

    cnt += ad[i - h];
    ++ad[h + i];
  }

  cout << cnt << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
