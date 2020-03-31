#include <bits/stdc++.h>

using namespace std;

int main() {
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
