#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    ll n, y;
    cin >> n >> y;
    y /= 1000;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j + i <= n; ++j) {
            if (10 * i + 5 * j + (n - i - j) == y) {
                cout << i << " " << j << " " << (n - i - j) << endl;
                return;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
