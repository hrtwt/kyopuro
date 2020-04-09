#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;

void solve() {
    Bint n, k;
    cin >> n >> k;

    Bint old = n;

    do {
        old = n;
        n %= k;
    } while (old > n);

    Bint t = (n - k >= 0 ? n - k : k - n);

    n = n - t <= 0 ? n : t;

    cout << n << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
