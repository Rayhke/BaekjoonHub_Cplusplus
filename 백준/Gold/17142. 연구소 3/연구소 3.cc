#include <iostream>
#include <vector>
#include <queue>
using namespace std;

short N, M, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
int P = 1e9;
vector <pair<short, short>> w, s(10);
vector <vector<pair<short, bool>>> v(50, vector<pair<short, bool>>(50, { 0,0 }));

void V() {
	bool r = 1; int W = 0;
	vector <vector<int>> Map(50, vector<int>(50, -1));
	vector <vector<bool>> R(50, vector<bool>(50, 1));
	queue <pair<pair<short, short>, pair<int, int>>> q;
	for (int n = 0; n < M; n++) {
		R[s[n].first][s[n].second] = 0;
		q.push({ {s[n].first,s[n].second},{0,1} });
	}
	while (!q.empty()) {
		short x = q.front().first.second, y = q.front().first.first;
		int Q = q.front().second.first, G = q.front().second.second; q.pop(); W = max(W, Q);
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (X < 0 || N <= X || Y < 0 || N <= Y) { continue; }
			if (v[Y][X].first != 1 && R[Y][X]) {
				R[Y][X] = 0;
				if (v[Y][X].first == 2 && v[Y][X].second) { q.push({ {Y,X}, {Q,G + 1} }); }
				else if (G > 0) { q.push({ {Y,X}, {Q + G,1} }); }
				else { q.push({ {Y,X}, {Q + 1,1} }); }

			}
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			if (v[n][m].first == 0 && R[n][m]) { r = 0; }
		}
	}
	if (r) { P = min(P, W); }
}

void B(int L, int O) {
	if (O == M) { V(); return; }
	for (int n = L; n < w.size(); n++) {
		int x = w[n].second, y = w[n].first;
		if (v[y][x].second) {
			v[y][x].second = 0; s[O] = { y,x };
			B(n + 1, O + 1);
			v[y][x].second = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cin >> v[n][m].first;
			if (v[n][m].first == 2) {
				v[n][m].second = 1; w.push_back({ n,m });
			}
		}
	}
	B(0, 0);
	if (P != 1e9) { cout << P; }
	else { cout << -1; }
	return 0;
}