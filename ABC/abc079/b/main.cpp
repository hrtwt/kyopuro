#include <bits/stdc++.h>


using namespace std;

void solve() {
    int n;
    cin >> n;

    int64_t a = 2, b = 1, c;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    for (n -= 1; n > 0; --n) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
