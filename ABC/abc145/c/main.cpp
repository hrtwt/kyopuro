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
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  double sum = 0;
  vector<int> t(n);
  iota(t.begin(), t.end(), 0);

  do {
    for (int i = 1; i < n; i++) {
      sum +=
          sqrt(pow(x[t[i]] - x[t[i - 1]], 2) + pow(y[t[i]] - y[t[i - 1]], 2));
    }
  } while (next_permutation(t.begin(), t.end()));

  int ex = 1;
  for (int i = 1; i < n + 1; i++) {
    ex *= i;
  }

  cout << sum / ex << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
