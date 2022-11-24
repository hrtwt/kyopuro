#include <bits/stdc++.h>


using namespace std;

void solve() {
    int a, ans = 0;

    cin >> a;

    for (int i = 0; i < 3; ++i) {
        if (a % 10 == 1) ++ans;
        a /= 10;
    }

    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
