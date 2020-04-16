#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    ll even = 0, odd = 0;
    int oddmin = numeric_limits<int>::max();
    for (int i = 0; i < n / 2; ++i) {
        int k1, k2;
        cin >> k1 >> k2;
        odd += k1;
        even += k2;
        oddmin = min(oddmin, k1);
    }
    if (n % 2 == 1) {
        int k;
        cin >> k;
        odd += k;
        oddmin = min(oddmin, k);
        odd -= oddmin;
    }

    cout << max(even, odd) << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
