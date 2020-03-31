#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < b; ++i) {
        if ((a * (i + 1)) % b == c) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}
