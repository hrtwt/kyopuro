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
  deque<string> a;
  a.push_back(s);
  int q;
  cin >> q;
  bool rev = false;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      rev = !rev;
    } else {
      int f;
      string c;
      cin >> f >> c;
      if (rev) {
        if (f == 1) {
          a.push_back(c);
        } else {
          a.push_front(c);
        }
      } else {
        if (f == 1) {
          a.push_front(c);
        } else {
          a.push_back(c);
        }
      }
    }
  }
  if (rev) {
    reverse(a.begin(), a.end());
    for (string &st : a) {
      reverse(st.begin(), st.end());
      cout << st;
    }
  } else {
    for (string &st : a) {
      cout << st;
    }
  }
  cout << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
