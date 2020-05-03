#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

int ans;
vector<int> a, b, c, d, A;
int n, m, q;

void dfs(int k) {
  if (k - 1 == n) {
    int sum = 0;
    for (int i = 0; i < q; i++) {
      if (A[b[i]] - A[a[i]] == c[i]) sum += d[i];
    }
    ans = max(ans, sum);
    return;
  }
  for (int i = A[k - 1]; i < m; i++) {
    A[k] = i;
    dfs(k + 1);
  }
}

void solve() {
  cin >> n >> m >> q;
  a.resize(q);
  b.resize(q);
  c.resize(q);
  d.resize(q);
  A.resize(n + 1);  // 1 based

  for (int i = 0; i < q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  A[0] = 0;
  dfs(1);
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
