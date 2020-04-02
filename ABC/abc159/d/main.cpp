#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin >> n;
    vector<ll> ball(n);
    vector<ll> count(n);

    for (auto &a:ball) {
        cin >> a;
        ++count[a];
    }

    ll comb = 0;
    for (auto j :count) {
        comb += j * (j - 1) / 2;
    }

    for (int i = 0; i < n; ++i) {
        if (count[ball[i]] == 0) continue;
        cout << comb - count[ball[i]] + 1 << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
