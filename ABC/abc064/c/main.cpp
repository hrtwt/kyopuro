#include <bits/stdc++.h>

#define ALL(c) std::begin(c), std::end(c)

using namespace std;
using ll = long long;

void solve() {
    vector<bool> bc(8, false);
    int free = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int in;
        cin >> in;
        if (in < 400)bc[0] = true;
        else if (in < 800)bc[1] = true;
        else if (in < 1200)bc[2] = true;
        else if (in < 1400)bc[3] = true;
        else if (in < 1600)bc[4] = true;
        else if (in < 2000)bc[5] = true;
        else if (in < 2400)bc[6] = true;
        else if (in < 3200)bc[7] = true;
        else ++free;
    }

    const int pre = count_if(ALL(bc), [](auto x) { return x; });
    cout << (pre ? pre : 1) << " " << pre + free << endl;

}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);

    solve();
    return 0;
}
