#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  vector<vector<int>> c(3, vector<int>(3));
  int ck = 0;
  for (auto& in : c) {
    for (auto& a : in) {
      cin >> a;
      ck += a;
    };
  }
  const int sum = c[0][0] + c[1][1] + c[2][2];
  if (sum * 3 != ck) {
    cout << "No" << endl;
    return;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) break;
      int k = i + j;
      if (k == 1)
        k = 2;
      else if (k == 3)
        k = 0;
      else if (k == 2)
        k = 1;

      if (c[i][j] != sum - c[j][i] - c[k][k]) {
        cout << "No" << endl;
        return;
      }
    }
  }
  cout << "Yes" << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
