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
  vector<ll> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  ll old = h[n - 1];

  for (int i = n - 2; i >= 0; --i) {
    if (h[i] > old + 1) {
      cout << "No\n";
      return;
    }
    if (h[i] == old + 1) {
      continue;
    }
    old = h[i];
  }
  cout << "Yes\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
