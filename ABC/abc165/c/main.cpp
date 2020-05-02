#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void recursive_comb(int *indexes, int s, int rest,
                    std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> a(q), b(q), c(q), d(q);
  for (int i = 0; i < q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    --a[i];
    --b[i];
  }

  ll ans = 0;

  foreach_comb(m, n, [&](int *indexes) {
    ll cnt = 0;
    for (int i = 0; i < q; i++) {
      if (indexes[b[i]] - indexes[a[i]] == c[i]) {
        cnt += d[i];
      }
    }

    for (int i = 0; i < n; i++) {
      cout << indexes[i] << ' ';
    }

    ans = max(ans, cnt);

    cout << cnt << endl;
  });

  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
