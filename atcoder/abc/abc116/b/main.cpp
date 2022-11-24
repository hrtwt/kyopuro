#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int s;
  cin >> s;
  unordered_set<int> se;
  int old = s;
  int count = 1;
  while (se.find(old) == se.end()) {
    se.insert(old);
    old = old % 2 == 0 ? old / 2 : 3 * old + 1;
    count++;
  }
  cout << count << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
