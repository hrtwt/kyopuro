#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<double> vote(n);
    double sum = 0;
    for (auto &a:vote) {
        cin >> a;
        sum += a;
    }

    int ans = 0;
    for (auto &a:vote) {
        if (a / sum >= 1.0 / (4.0 * m)) {
            ans++;
        }
    }

    cout << (ans >= m ? "Yes" : "No") << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
