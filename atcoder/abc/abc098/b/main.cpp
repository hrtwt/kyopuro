#include <bits/stdc++.h>

#define ALL(c) std::begin(c), std::end(c)

using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s >> s;

    long m = 0;
    for (int i = 0; i < s.length(); ++i) {
        vector<bool> tmp(26);
        for (int j = 0; j < i; ++j) {
            if (s.find(s.at(j), i) != string::npos) {
                tmp[s.at(j) - 'a'] = true;
            }
        }
        m = max(m, count(ALL(tmp), true));
    }
    cout << m << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
