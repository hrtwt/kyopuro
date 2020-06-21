#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> a;
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    ++a[t];
    sum += t;
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int b, c;
    cin >> b >> c;

    sum = sum + (c - b) * a[b];
    cout << sum << endl;

    a[c] += a[b];
    a[b] = 0;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
