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
  vector<int> a(n + 1, 0);
  for (int i = 0; i < n - 1; i++) {
    int in;
    cin >> in;
    ++a[in];
  }

  for (int i = 1; i < n + 1; i++) {
    cout << a[i] << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
