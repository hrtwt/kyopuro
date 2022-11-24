#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

struct Doubling {
  const int LOG;
  vector<vector<int> > table;

  Doubling(int sz, int64_t lim_t)
      : LOG(64 - __builtin_clzll(lim_t)) {  // countl_zero()
    table.assign(LOG, vector<int>(sz, -1));
  }

  void set_next(int k, int x) { table[0][k] = x; }

  void build() {
    for (int k = 0; k + 1 < LOG; k++) {
      for (int i = 0; i < table[k].size(); i++) {
        if (table[k][i] == -1)
          table[k + 1][i] = -1;
        else
          table[k + 1][i] = table[k][table[k][i]];
      }
    }
  }

  int query(int k, int64_t t) {
    for (int i = LOG - 1; i >= 0; i--) {
      if ((t >> i) & 1) k = table[i][k];
    }
    return k;
  }
};

void solve() {
  string s;
  cin >> s;
  const int n = s.size();

  Doubling db(n, 1e5);

  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      db.set_next(i, i + 1);
    } else {
      db.set_next(i, i - 1);
    }
  }

  db.build();

  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    ++sum[db.query(i, 1e5)];
  }

  for (int i = 0; i < n - 1; i++) {
    cout << sum[i] << ' ';
  }
  cout << sum[n - 1] << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
