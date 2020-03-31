#include <bits/stdc++.h>


using namespace std;

int main() {
    int n, a, b, ans = 0;
    cin >> n >> a >> b;

    for (int i = 0; i <= n; ++i) {
        int k = i;
        int sum = k % 10;
        k /= 10;
        while (k) {
            sum += k % 10;
            k /= 10;
        }
        if (a <= sum && sum <= b) {
            ans += i;
        }
    }
    cout << ans << endl;
}
