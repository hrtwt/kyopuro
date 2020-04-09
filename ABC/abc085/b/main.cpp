#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    cout << a.size() << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
