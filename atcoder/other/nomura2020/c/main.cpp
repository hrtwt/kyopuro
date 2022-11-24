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
  vector<int> A(n + 1);
  ll sum = 0;
  for (int i = 0; i <= n; i++) {
    cin >> A[i];
    sum += A[i];
  }

  vector<int> all(n + 1);
  {
    ll node = 1;
    for (int i = 0; i < n; i++) {
      all[i] = node;
      node -= A[i];
      if (node <= 0) {
        cout << -1 << endl;
        return;
      }
      node *= 2;
    }
    node -= A[n];
    if (node < 0) {
      cout << -1 << endl;
      return;
    }
  }

  vector<ll> node(n + 1);
  node[n] = A[n];
  for (int i = n - 1; i >= 0; --i) {
    node[i] = node[i + 1] / 2 + node[i + 1] % 2 + A[i];
  }

  int sp = 0;
  for (int i = 0; i <= n; i++) {
    while (node[sp] >= all[sp]) {
      ++sp;
    }
    // if (sp >= i) continue;

    for (int j = sp; j < i; j++) {
      node[j] += A[i] / 2;
    }
  }

  cout << accumulate(node.begin(), node.end(), (ll)0) << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
