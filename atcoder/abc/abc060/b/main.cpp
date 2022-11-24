#include <bits/stdc++.h>


using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < b; ++i) {
        if ((a * (i + 1)) % b == c) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
