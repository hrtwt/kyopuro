#include <bits/stdc++.h>

using namespace std;

int main() {
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
