#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  uint32_t n, k, s, t;
  cin >> n >> k >> s >> t;
  unordered_set<uint32_t> prob;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t t;
    cin >> t;
    prob.insert(t);
  }

  vector<bool> ck(18, false);

  for (uint32_t i = 0; i < 18; i++) {
    if (s & (1 << i)) {  // TODO
      ck[i] = true;
      for (uint32_t t : prob) {
        if (!(t & (1 << i))) {  // TODO
          prob.erase(t);
        }
      }
    }
  }

  for (uint32_t i = 0; i < 18; i++) {
    if (!(t & (1 << i))) {
      ck[i] = true;
      for (uint32_t t : prob) {
        if ((t & (1 << i))) {
          prob.erase(t);
        }
      }
    }
  }

  vector<unordered_set<uint32_t>> b1(18);
  for (uint32_t i = 0; i < 18; i++) {
    if (ck[i] == false) {
      for (uint32_t t : prob) {
        if ((t & (1 << i))) {
          b1[i].insert(t);
        }
      }
    }
  }

  vector<unordered_set<uint32_t>> b2(18);
  for (uint32_t i = 0; i < 18; i++) {
    if (ck[i] == false) {
      for (uint32_t t : prob) {
        if (!(t & (1 << i))) {
          b2[i].insert(t);
        }
      }
    }
  }

  cout << pow(2, prob.size()) - 1 << endl;  // TODO max
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
