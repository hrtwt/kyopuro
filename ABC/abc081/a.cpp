#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, ans = 0;

    cin >> a;

    for (int i = 0; i < 3; ++i) {
        if (a % 10 == 1) ++ans;
        a /= 10;
    }

    cout << ans << endl;
}
