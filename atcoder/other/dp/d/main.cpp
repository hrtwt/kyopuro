#include <vector>
#include <iostream>
#include <iomanip>

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
    int n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> in(n);
    for (auto &&a: in) {
        cin >> a.first >> a.second;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < w + 1; ++j) {
            if (j - in[i].first >= 0) {
                chmax(dp[i + 1][j], dp[i][j - in[i].first] + in[i].second);
            }
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }
    cout << dp[n][w] << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
