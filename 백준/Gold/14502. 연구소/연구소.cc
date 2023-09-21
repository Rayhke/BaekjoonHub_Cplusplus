#include <iostream>
#include <vector>
#include <queue>
using namespace std;

short N, M, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
int P = 0;
vector <vector<short>> v(8, vector<short>(8, 0));
vector <pair<short, short>> w,r;

void V() {
	int Q = 0;
	vector <vector<bool>> R(8, vector<bool>(8, 1));
	queue <pair<short, short>> q;
	for (const auto& n : r) {
		R[n.first][n.second] = 0;
		q.push({ n.first,n.second });
	}
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (X < 0 || M <= X || Y < 0 || N <= Y) { continue; }
			if (v[Y][X] == 0 && R[Y][X]) {
				R[Y][X] = 0; q.push({ Y,X });
			}
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (R[n][m] && v[n][m] == 0) { Q++; }
		}
	}
	P = max(P, Q);
}

void W(int L, int O) {
	if (O == 3) { V(); return; }
	for (int n = L; n < w.size(); n++) {
		int x = w[n].second, y = w[n].first;
		if (v[y][x] == 0) {
			v[y][x] = 1;
			W(n + 1, O + 1);
			v[y][x] = 0;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> v[n][m];
			if (v[n][m] == 0) { w.push_back({ n,m }); }
			else if (v[n][m] == 2) { r.push_back({ n,m }); }
		}
	}
	W(0, 0);
	cout << P;
	return 0;
}