#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  unsigned long long K;
  cin >> n >> K;
  int log_n = 60;
  std::vector<std::vector<int>> next(log_n + 1, std::vector<int>(n));

  for (int i = 0; i < n; i++) {
    cin >> next[0][i];
    --next[0][i];
  }

  for (int k = 0; k < log_n; ++k) {
    for (int i = 0; i < n; ++i) {
      if (next[k][i] == -1) {
        next[k + 1][i] = -1;
      } else {
        next[k + 1][i] = next[k][next[k][i]];
      }
    }
  }

  int p = 0;

  for (int k = log_n - 1; k >= 0; --k) {
    if (p == -1) {
      break;
    }
    if ((K >> k) & 1) {
      p = next[k][p];
    }
  }

  cout << p + 1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
