#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> um(n, -1);
  for (int i = 0; i < m; i++) {
    int s, c;
    cin >> s >> c;
    --s;
    if (um[s] == -1) {
      um[s] = c;
    } else if (um[s] == c) {
      continue;
    } else {
      cout << -1 << endl;
      return;
    }
  }

  if (n != 1 && um[0] == 0) {
    cout << -1 << endl;
    return;
  }
  if (n == 1 && um[0] == -1) um[0] = 0;

  if (n != 1 && um[0] == -1) um[0] = 1;

  for (int i = 0; i < n; i++)
    if (um[i] == -1) um[i] = 0;

  int ans = um[0];
  for (int i = 1; i < n; i++) {
    ans *= 10;
    ans += um[i];
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
