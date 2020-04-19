#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a + b == c + d)
    cout << "Balanced";
  else if (a + b > c + d)
    cout << "Left";
  else
    cout << "Right";
  cout << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
