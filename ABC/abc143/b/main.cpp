#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      sum += d[i] * d[j];
    }
  }

  cout << sum << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
