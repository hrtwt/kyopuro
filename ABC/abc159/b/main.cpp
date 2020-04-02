#include <bits/stdc++.h>


using namespace std;

bool chkpal(string s) {
    if (s.size() == 1)return true;
    if (s.front() == s.back())
        return chkpal(s.substr(1, s.size() - 2));
    return false;
}

int main() {
    string s;
    cin >> s;

    string hs = s.substr(0, s.size() / 2);

    if (hs != s.substr(s.size() / 2 + 1)) {
        cout << "No" << endl;
        return 0;
    }

    if (chkpal(s)) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
