#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 1e5;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int k = 0, in;
        cin >> in;
        while (in % 2 == 0) {
            in /= 2;
            ++k;
        }
        ans = min(ans, k);
    }
    cout << ans << endl;
}
