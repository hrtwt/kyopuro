#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        in[i] = x;
    }
    whole(sort, in);
    int min = numeric_limits<int>::max();
    for (int j = in.front(); j <= in.back(); ++j) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += pow(in[i] - j, 2);
        }
        min = std::min(min, sum);
    }
    cout << min << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
