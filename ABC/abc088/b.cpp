#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vc(n);
    for (auto &a:vc) {
        cin >> a;
    }

    sort(vc.begin(), vc.end(), greater<>());

    int alice = 0, bob = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)alice += vc.at(i);
        else bob += vc.at(i);
    }
    cout << alice - bob << endl;
}
