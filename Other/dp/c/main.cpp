#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

template<class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<ll>> in(n, vector<ll>(3));
    for (auto &&t  :in) {
        cin >> t[0] >> t[1] >> t[2];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(3, 0));
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (j == k)continue;
                chmax(dp[i][k], dp[i - 1][j] + in[i - 1][k]);
            }
        }
    }
    cout << *whole(max_element, dp[n]) << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
