#include <bits/stdc++.h>


using namespace std;

void solve() {
    long double l;
    cin >> l;

    const long double side = l / 3;
    cout << pow(side, 3) << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
