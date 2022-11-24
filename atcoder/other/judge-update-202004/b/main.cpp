#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> b;
    vector<int> r;

    for (int i = 0; i < n; ++i) {
        int k;
        string c;
        cin >> k >> c;
        if (c == "R") {
            r.push_back(k);
        } else {
            b.push_back(k);
        }
    }
    whole(sort, b);
    whole(sort, r);

    for (int a:r) {
        cout << a << endl;
    }
    for (int a:b) {
        cout << a << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
