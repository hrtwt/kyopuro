#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    auto chk = [=]() {
        if (s[a] != '-') return false;
        if (!all_of(s.begin(), s.begin() + a, ::isdigit)) return false;
        return all_of(s.cbegin() + a + 1, s.cend(), ::isdigit);
    };

    if (chk()) {
        cout << "Yes";
    } else cout << "No";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
