#include <bits/stdc++.h>


using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.back() == b.front() && b.back() == c.front())
        cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
