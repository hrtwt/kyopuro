#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    int tp = 0, xp = 0, yp = 0;
    for (int i = 0; i < n; ++i) {
        int t, x, y;
        cin >> t >> x >> y;
        if (abs(x - xp) + abs(y - yp) > t - tp || (abs(x - xp) + abs(y - yp)) % 2 != (t - tp) % 2) {
            cout << "No" << endl;
            return;
        }
        tp = t;
        xp = x;
        yp = y;
    }
    cout << "Yes\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
