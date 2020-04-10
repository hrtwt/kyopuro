#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int a, b;
    cin >> a >> b;

    if((a % 2) * (b % 2) == 0){
        cout << "Even" << endl;
        return 0;}

    cout << "Odd" << endl;
    return 0;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
