#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int k;
    cin >> k;
    int ans = 0;
    for (int i = 1; i < k + 1; ++i) {
        for (int j = 1; j < k + 1; ++j) {
            for (int l = 1; l < k + 1; ++l) {
                ans += gcd(i, gcd(j, l));
            }
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
