#include <bits/stdc++.h>


using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    double ave = (a + b) / 2.0;
    cout << static_cast<int>(ceil(ave)) << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
