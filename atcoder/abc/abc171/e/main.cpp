#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<uint64_t> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  uint64_t sum = a[0];
  for (int i = 1; i < n; i++) {
    sum ^= a[i];
  }

  vector<uint64_t> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = sum ^ a[i];
  }

  for (int i = 0; i < n - 1; i++) {
    cout << ans[i] << ' ';
  }
  cout << ans[n - 1] << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
