#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(200001);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ++a[x];
  }
  sort(a.begin(), a.end(), greater<>());
  long long ans = 0;
  for (int i = k; i < n; i++) {
    ans += a[i];
  }
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
