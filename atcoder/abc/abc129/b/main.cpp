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
  vector<int> w(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    sum += w[i];
  }

  int s1 = 0, res = sum;

  for (int i = 0; i < n; i++) {
    s1 += w[i];
    res = min(res, abs(s1 - (sum - s1)));
  }

  cout << res << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
