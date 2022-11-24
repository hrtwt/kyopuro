#include <bits/stdc++.h>

#define ALL(c)  std::begin(c), std::end(c)

using namespace std;
using ll = long long;

void solve() {
    ll n, t;
    cin >> n >> t;
    vector<ll> ts(n);
    cin >> ts[0];
    for (int i = 0; i < n - 1; ++i) {
        cin >> ts[i + 1];
        ts[i] = min(ts[i + 1] - ts[i], t);
    }
    ts[n - 1] = t;

    ll sum = 0;
    for (int j = 0; j < n; ++j) {
        sum += ts[j];
    }
    cout << sum << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
