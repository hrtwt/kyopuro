#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int64_t a = 2, b = 1, c;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (n -= 1; n > 0; --n) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c << endl;
}
