#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

struct SegmentTree {
  using F =
      function<unordered_set<int>(unordered_set<int>, unordered_set<int>)>;

  int sz;
  vector<unordered_set<int>> seg;

  const unordered_set<int> M1 = unordered_set<int>();

  SegmentTree(int n) {
    sz = 1;
    while (sz < n) sz <<= 1;
    seg.assign(2 * sz, M1);
  }

  void set(int k, const unordered_set<int> &x) { seg[k + sz] = x; }

  void build() {
    for (int k = sz - 1; k > 0; k--) {
      seg[k] = unordered_set<int>();
      seg[k].merge(seg[2 * k + 0]);
      seg[k].merge(seg[2 * k + 1]);
    }
  }

  void update(int k, const unordered_set<int> &x) {
    k += sz;
    seg[k] = x;
    while (k >>= 1) {
      seg[k] = unordered_set<int>();
      seg[k].merge(seg[2 * k + 0]);
      seg[k].merge(seg[2 * k + 1]);
    }
  }

  unordered_set<int> query(int a, int b) {
    unordered_set<int> L = M1, R = M1;
    for (a += sz, b += sz; a < b; a >>= 1, b >>= 1) {
      if (a & 1) {
        L = unordered_set<int>();
        L.merge(L);
        L.merge(seg[a++]);
      }
      if (b & 1) {
        R = unordered_set<int>();
        R.merge(seg[--b]);
        R.merge(R);
      }
    }
    unordered_set<int> s = unordered_set<int>();
    s.merge(L);
    s.merge(R);
    return s;
  }

  unordered_set<int> operator[](const int &k) const { return seg[k + sz]; }

  template <typename C>
  int find_subtree(int a, const C &check, unordered_set<int> &M, bool type) {
    while (a < sz) {
      unordered_set<int> nxt = unordered_set<int>();
      if (type) {
        nxt.merge(seg[2 * a + type]);
        nxt.merge(M);
      } else {
        nxt.merge(seg[2 * a + type]);
        nxt.merge(M);
      }
      if (check(nxt))
        a = 2 * a + type;
      else
        M = nxt, a = 2 * a + 1 - type;
    }
    return a - sz;
  }
};

void solve() {
  int n, q;
  cin >> n >> q;

  SegmentTree seg(n);

  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    unordered_set<int> s = unordered_set<int>();
    s.insert(c);
    seg.set(i, s);
  }

  seg.build();

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << seg.query(l, r + 1).size() << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
