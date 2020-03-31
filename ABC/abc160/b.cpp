#include <bits/stdc++.h>


using namespace std;

int main() {
    int a;
    int ans = 0;

    cin >> a;

    while (a >= 500) {
        a -= 500;
        ans += 1000;
    }
    while (a >= 5) {
        a -= 5;
        ans += 5;
    }

    cout << ans << endl;

}
