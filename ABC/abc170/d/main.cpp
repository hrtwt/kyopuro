#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

bool is_prime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
  }

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int ans = a[0] != a[1] ? 1 : 0;

  for (int i = 1; i < n; i++) {
    // if (a[i - 1] == a[i] || (i != n - 1 && a[i] == a[i + 1])) {
    //   continue;
    // }
    if (is_prime(a[i])) {
      ++ans;
      continue;
    }

    bool ok = true;
    for (int j = 0; j < i; j++) {
      if (a[i] % a[j] == 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ++ans;
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
