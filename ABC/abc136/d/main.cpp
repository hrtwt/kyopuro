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
  const int n = s.size();
  vector<int> even(n, 1), odd(n, 1), eveno(n);

  auto nextGen = [n, &s](auto& prev, auto& ne) {
    ne.clear();
    ne.resize(n);
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') {
        ne[i + 1] += prev[i];
      } else {
        ne[i - 1] += prev[i];
      }
    }
  };

  for (int i = 1; i < 1e8; i++) {
    if (i % 2 == 0) {
      copy(even.begin(), even.end(), eveno.begin());
      nextGen(odd, even);
    } else {
      nextGen(even, odd);
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
      ok = eveno[i] == even[i];
      if (!ok) break;
    }
    if (ok) break;
  }

  for (int i = 0; i < n - 1; i++) {
    cout << even[i] << ' ';
  }
  cout << even[n - 1] << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
