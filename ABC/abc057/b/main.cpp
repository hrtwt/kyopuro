#include <bits/stdc++.h>

#define ALL(c) std::begin(c), std::end(c)

using namespace std;
using ll = long long;
using pr = std::pair<ll, ll>;

ll dist(pr person, pr ck) {
    return abs(person.first - ck.first) + abs(person.second - ck.second);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pr> per(n);
    vector<pr> ck(m);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        per[i] = make_pair(a, b);
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        ck[i] = make_pair(a, b);
    }

    for (int j = 0; j < n; ++j) {
        pr p = per[j];
        pr min = make_pair(0, dist(p, ck[0]));
        for (int i = 1; i < m; ++i) {
            pr d = make_pair(i, dist(p, ck[i]));
            min = std::min(min, d, [](auto &a, auto &b) { return a.second < b.second; });
        }
        cout << min.first +1 << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
