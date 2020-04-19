#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  --n;
  vector<int> c(n);
  vector<int> s(n);
  vector<int> f(n);
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    c[i] = tmp;
    cin >> tmp;
    s[i] = tmp;
    cin >> tmp;
    f[i] = tmp;
  }

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = i; j < n; j++) {
      if (cnt > s[j]) {
        while (cnt % f[j]) ++cnt;
      } else {
        cnt = s[j];
      }
      cnt += c[j];
    }
    cout << cnt << "\n";
  }
  cout << 0 << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
