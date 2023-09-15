#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool P = 1;
int N, M, L = 0, D = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
vector <vector<pair<bool, bool>>> r(100, vector<pair<bool, bool>>(100, { 0,0 }));

void V() {
	vector <vector<bool>> R(100, vector<bool>(100, 1));
	queue <pair<short, short>> q; q.push({ 0,0 }); R[0][0] = 0;
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (R[Y][X]) {
					if (!r[Y][X].first) { q.push({ Y,X }); }
					else { L++; P = 0; r[Y][X].second = 1; }
					R[Y][X] = 0;
				}
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> r[n][m].first; }
	}
	while (1) {
		int U = L; L = 0; V();
		if (P) { cout << D << '\n' << U; break; }
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (r[n][m].second) { r[n][m].first = 0; r[n][m].second = 0; }
			}
		}
		P = 1; D++;
	}
	return 0;
}