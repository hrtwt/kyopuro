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
  vector<pair<ll, ll>> a(n);
  for (auto& t : a) {
    cin >> t.second >> t.first;
  }
  sort(a.begin(), a.end());

  ll t = 0;
  for (int i = 0; i < n; i++) {
    t += a[i].second;
    if (t > a[i].first) {
      cout << "No\n";
      return;
    }
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
