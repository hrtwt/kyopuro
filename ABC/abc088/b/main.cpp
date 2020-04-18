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
  vector<int> vc(n);
  for (auto &a : vc) {
    cin >> a;
  }

  sort(vc.begin(), vc.end(), greater<>());

  int alice = 0, bob = 0;

  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0)
      alice += vc.at(i);
    else
      bob += vc.at(i);
  }
  cout << alice - bob << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
