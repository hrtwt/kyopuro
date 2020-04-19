#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a;
  d = a % 10;
  a /= 10;
  c = a % 10;
  a /= 10;
  b = a % 10;
  a /= 10;

  if (a + b + c + d == 7)
    cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;
  else if (a + b + c - d == 7)
    cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;
  else if (a + b - c + d == 7)
    cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;
  else if (a + b - c - d == 7)
    cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;
  else if (a - b + c + d == 7)
    cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;
  else if (a - b + c - d == 7)
    cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;
  else if (a - b - c + d == 7)
    cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;
  else if (a - b - c - d == 7)
    cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
