#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 1; i < 1e4; i++) {
    string ser = to_string(i * 2019);
    size_t pos = s.find(ser);
    while (pos != string::npos) {
      pos = s.find(ser, pos + 1);
      ++cnt;
    }
  }

  cout << cnt << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
