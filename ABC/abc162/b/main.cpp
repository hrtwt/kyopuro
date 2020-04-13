#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n + 1; ++i) {
        if (i % 3 != 0 && i % 5 != 0) {
            ans += i;
        }
    }
    cout << ans << "\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
