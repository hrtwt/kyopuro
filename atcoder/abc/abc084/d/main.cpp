#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

template<class T>
bool is_prime(const T n) {
    switch (n) {
        case 0: // fall-through
        case 1:
            return false;
        case 2: // fall-through
        case 3:
            return true;
    }

    if (n % 2 == 0 || n % 3 == 0) return false;
    for (unsigned i = 5; i * i <= n; i += 6) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
    }
    return true;
}


void solve() {
    int q;
    cin >> q;
    vector<int> vec(10e5 + 2);
    for (int i = 0; i < 10e5 + 2; ++i) {
        if (i % 2 == 0)continue;
        if (is_prime((i + 1) / 2) and is_prime(i))++vec[i];
    }
    for (int i = 1; i < 10e5 + 2; ++i) {
        vec[i] += vec[i - 1];
    }
    for (int j = 0; j < q; ++j) {
        int l, r;
        cin >> l >> r;
        cout << (vec[r + 1] - vec[l - 1]) << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
