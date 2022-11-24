#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (n == i * j) {
        cout << "Yes\n";
        return;
      }
    }
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
