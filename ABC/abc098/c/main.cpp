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
  string s;
  cin >> s;
  vector<int> a(n + 1);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'E') {
      a[i + 1] = a[i] + 1;
    } else {
      a[i + 1] = a[i];
    }
  }

  int mi = n;
  for (int i = 0; i <= n; i++) {
    mi = min(mi, i - (a[i] - a[0]) + a[n] - a[i]);
  }
  cout << mi << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
