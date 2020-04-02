#include <bits/stdc++.h>


using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<>());

    if (s < t) {
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
