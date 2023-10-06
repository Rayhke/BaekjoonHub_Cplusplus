#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<pair<pair<bool, bool>, int>>> v(1000, vector<pair<pair<bool, bool>, int>>(1000, { {0,1},1 }));
queue <pair<int, int>> q;

void V(int n, int m) {
    int P = 1; q.push({ n,m });
    vector <pair<int, int>> w;
    while (!q.empty()) {
        int x = q.front().second, y = q.front().first; q.pop();
        for (int n = 0; n < 4; n++) {
            int X = x + PX[n], Y = y + PY[n];
            if (X < 0 || M <= X || Y < 0 || N <= Y || !v[Y][X].first.second) { continue; }
            if (v[Y][X].first.first) { w.push_back({ Y,X }); }
            else { P++; q.push({ Y,X }); }
            v[Y][X].first.second = 0;
        }
    }
    for (const auto& p : w) {
        int X = p.second, Y = p.first;
        v[Y][X].first.second = 1; v[Y][X].second += P;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            char c; cin >> c;
            if (c == 49) { v[n][m].first.first = 1; }
        }
    }
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            if (v[n][m].first.first || !v[n][m].first.second) { continue; }
            v[n][m].first.second = 0; V(n, m);
        }
    }
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            (v[n][m].first.first) ? cout << v[n][m].second % 10 : cout << 0;
        }
        cout << '\n';
    }
    return 0;
}