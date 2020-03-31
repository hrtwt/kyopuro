#include <bits/stdc++.h>

using namespace std;

int main() {
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
