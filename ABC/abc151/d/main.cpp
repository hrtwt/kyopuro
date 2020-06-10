#include <bits/stdc++.h>

#define whole(f, x, ...)                                 \
  ([&](decltype((x)) whole) {                            \
    return (f)(begin(whole), end(whole), ##__VA_ARGS__); \
  })(x)

using namespace std;
using ll = long long;
template <typename T>
using Matrix = vector<vector<T> >;
const int INF = 1e7;

template <typename T>
void warshall_floyd(Matrix<T> &g, T INF) {
  for (int k = 0; k < g.size(); k++) {
    for (int i = 0; i < g.size(); i++) {
      for (int j = 0; j < g.size(); j++) {
        // if (g[i][k] == INF || g[k][j] == INF) continue;
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
      }
    }
  }
}

void solve() {
  int H, W;
  cin >> H >> W;
  Matrix<int> mat(H * W, vector<int>(H * W, INF));
  vector<string> s(H);
  for (int i = 0; i < H; i++) {
    cin >> s[i];
  }

  auto id = [=](int h, int w) { return h * W + w; };

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (s[i][j] == '.') {
        mat[id(i, j)][id(i, j)] = 0;
        if (i - 1 >= 0 && s[i - 1][j] == '.') {
          mat[id(i, j)][id(i - 1, j)] = 1;
          mat[id(i - 1, j)][id(i, j)] = 1;
        }
        if (i + 1 < H && s[i + 1][j] == '.') {
          mat[id(i, j)][id(i + 1, j)] = 1;
          mat[id(i + 1, j)][id(i, j)] = 1;
        }
        if (j - 1 >= 0 && s[i][j - 1] == '.') {
          mat[id(i, j)][id(i, j - 1)] = 1;
          mat[id(i, j - 1)][id(i, j)] = 1;
        }
        if (j + 1 < W && s[i][j + 1] == '.') {
          mat[id(i, j + 1)][id(i, j)] = 1;
          mat[id(i, j)][id(i, j + 1)] = 1;
        }
      }
    }
  }
  warshall_floyd(mat, INF);

  int ma = 0;
  for (int i = 0; i < H * W; i++) {
    for (int j = 0; j < H * W; j++) {
      if (mat[i][j] == INF) continue;
      ma = max(ma, mat[i][j]);
    }
  }

  cout << ma << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);

  solve();
  return 0;
}
