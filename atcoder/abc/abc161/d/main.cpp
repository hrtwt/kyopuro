#include <bits/stdc++.h>

#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)


using namespace std;
using ll = long long;

void solve() {
    ll k;
    cin >> k;
    if (k < 10) {
        cout << k << endl;
        return;
    }
    k -= 9;
    deque<ll> deq;
    for (int i = 1; i < 10; ++i) {
        deq.push_back(i);
    }
    while (k > 0) {
        ll now = deq.front();
        deq.pop_front();
        ll next = now * 10 + now % 10;
        if (next % 10 != 0) {
            deq.push_back(next-1);
            k--;
        }
        deq.push_back(next);
        k--;
        if (next % 10 != 9) {
            deq.push_back(next+1);
            k--;
        }
    }
    for (; k ; ++k) {
        deq.pop_back();
    }
    cout << deq.back() << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
