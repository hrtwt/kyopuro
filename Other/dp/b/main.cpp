#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (auto &a:h) {
        cin >> a;
    }

    vector<ll> dp(n, numeric_limits<ll>::max());
    dp[1] = abs(h[1] - h[0]);
    for (int i = 1; i < n; ++i) {
        for (int j = min(i, k) - 1; j > 0; --j) {
            dp[i] = min(dp[i], abs(h[i] - h[i - j]) + dp[i - j]);
        }
    }
    cout << dp[n - 1] << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
