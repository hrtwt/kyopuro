#include <bits/stdc++.h>


using namespace std;
using Graph = vector<vector<int>>;


int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    --X;
    --Y;

    Graph g(N);
    g[0].push_back(1);
    g[N - 1].push_back(N - 2);
    g[X].push_back(Y);
    g[Y].push_back(X);
    for (int i = 1; i < N - 1; ++i) {
        g[i].push_back(i - 1);
        g[i].push_back(i + 1);
    }

    vector<int> ans(N, 0);

    for (int k = 0; k < N; ++k) {
        vector<int> dist(N, -1);
        queue<int> que;
        dist[k] = 0;
        que.push(k);

        while (!que.empty()) {
            int v = que.front();
            que.pop();

            for (int nv: g[v]) {
                if (dist[nv] != -1) continue;
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }

        for (int j = 0; j < N; ++j) {
            ans[dist[j]]++;
        }
    }

    for (int l = 1; l < N; ++l) {
        cout << ans[l] / 2 << endl;
    }
}
