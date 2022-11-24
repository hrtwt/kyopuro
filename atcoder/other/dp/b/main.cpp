#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

template<class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}


void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (auto &a:h) {
        cin >> a;
    }

    vector<ll> dp(n, numeric_limits<ll>::max());
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= k && i + j < n; ++j) {
            chmin(dp[i + j], abs(h[i + j] - h[i]) + dp[i]);
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
