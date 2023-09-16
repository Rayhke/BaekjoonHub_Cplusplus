#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool P = 1;
int N, M, D = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<pair<bool, int>>> v(100, vector<pair<bool, int>>(100, { 0,0 }));

void V() {
	vector <vector<bool>> r(100, vector<bool>(100, 1));
	queue <pair<short, short>> q; q.push({ 0,0 }); r[0][0] = 0;
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (r[Y][X]) {
					if (!v[Y][X].first) { q.push({ Y,X }); }
					else { P = 0; }
					r[Y][X] = 0;
				}
				else if (v[Y][X].first) { v[Y][X].second++; }
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> v[n][m].first; }
	}
	while (1) {
		V();
		if (P) { cout << D; break; }
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (v[n][m].second) { v[n][m].first = 0; }
				v[n][m].second = 0;
			}
		}
		P = 1; D++;
	}
	return 0;
}