#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int a, b;
    cin >> a >> b;

    int cnt = 10, tmp = b;
    while (tmp /= 10) {
        cnt *= 10;
    }

    int num = a * cnt + b;

    int num1 = sqrt(num);

    if (num1 * num1 == num) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
