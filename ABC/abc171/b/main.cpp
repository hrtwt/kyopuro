#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());
  int sum = 0;
  for (int i = 0; i < k; i++) {
    sum += p[i];
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
