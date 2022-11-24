#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  vector<int> a(9);
  int n;
  for (int i = 0; i < 3; i++) {
    cin >> a[3 * i] >> a[3 * i + 1] >> a[3 * i + 2];
  }
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    auto it = find(a.begin(), a.end(), b);
    if (it != a.end()) {
      *it = 0;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (a[3 * i] + a[3 * i + 1] + a[3 * i + 2] == 0 ||
        a[i] + a[i + 3] + a[i + 6] == 0) {
      cout << "Yes\n";
      return;
    }
  }
  if (a[0] + a[4] + a[8] == 0 || a[2] + a[4] + a[6] == 0) {
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
