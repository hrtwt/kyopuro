#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> h(n);
    for (auto &a:h) {
        cin >> a;
    }

    vector<ll> dp(n, 0);
    dp[1] = abs(h[1] - h[0]);
    for (int i = 1; i < n - 1; ++i) {
        dp[i] = min(dp[i], abs(h[i] - h[i - 1]) + dp[i - 1]);
        dp[i + 1] = abs(h[i + 1] - h[i - 1]) + dp[i - 1];
    }
    dp[n - 1] = min(dp[n - 1], abs(h[n - 1] - h[n - 2]) + dp[n - 2]);
    cout << dp[n - 1] << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
