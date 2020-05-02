#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

struct UnionFind {
  vector<int> data;

  UnionFind(int sz) { data.assign(sz, -1); }

  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if (x == y) return (false);
    if (data[x] > data[y]) swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return (true);
  }

  int find(int k) {
    if (data[k] < 0) return (k);
    return (data[k] = find(data[k]));
  }

  bool issame(int a, int b) { return find(a) == find(b); }

  int size(int k) { return (-data[find(k)]); }
};

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  UnionFind uf(n);
  vector<unordered_set<int>> s(n);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    uf.unite(a, b);
    s[a].insert(b);
    s[b].insert(a);
  }
  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    if (uf.issame(a, b)) {
      s[a].insert(b);
      s[b].insert(a);
    }
  }
  for (int i = 0; i < n - 1; i++) {
    cout << uf.size(i) - s[i].size() - 1 << ' ';
  }
  cout << uf.size(n - 1) - s[n - 1].size() - 1 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
