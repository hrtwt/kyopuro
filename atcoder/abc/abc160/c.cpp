#include <bits/stdc++.h>


using namespace std;


int main() {
    int K, N;

    cin >> K >> N;
    vector<int> A(N);
    vector<int> P(N);

    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
        P.at(i) = i;
    }

    int dist = 0, dist_sum = 0;
    int max_d = 0;

    const int left0 = abs(A.at(N - 1) - A.at(0));
    dist = min(left0, K - left0);
    dist_sum += dist;
    max_d = max(max_d, dist);


    for (int j = 1; j < N; ++j) {
        const int left = abs(A.at(j) - A.at(j - 1));
        dist = min(left, K - left);
        dist_sum += dist;
        max_d = max(max_d, dist);
    }


    cout << dist_sum - max_d << endl;
}
