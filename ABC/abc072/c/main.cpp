#include <bits/stdc++.h>

#define ALL(c) std::begin(c), std::end(c)

using namespace std;
using ll = long long;

void solve() {
    vector<ll> bc(10e5 + 2);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ++bc[a];
        ++bc[a + 1];
        ++bc[a + 2];
    }
    cout << *max_element(ALL(bc)) << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
