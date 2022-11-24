#include <bits/stdc++.h>


using namespace std;

void solve() {
    string n;
    cin >> n;

    if (n.at(0) == n.at(1) && n.at(1) == n.at(2)) {
        cout << "Yes" << endl;
        return;
    } else if (n.at(1) == n.at(2) && n.at(2) == n.at(3)) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
