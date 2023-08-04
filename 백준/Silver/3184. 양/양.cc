#include <iostream>
#include <queue>
using namespace std;

char c[255][255];
bool r[255][255];
int S = 0, W = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };

void V(int m, int n, int C, int R) {
	char P = c[n][m]; int s = 0, w = 0;
	queue <pair<int, int>> q; q.push(make_pair(m, n)); r[n][m] = 1;
	if (P != '.') {
		if (P == 'o') { s++; }
		else if (P == 'v') { w++; }
	}
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int N = 0; N < 4; N++) {
			int X = x + PX[N], Y = y + PY[N];
			if (-1 < X && X < C && -1 < Y && Y < R) {
				if (!r[Y][X]) {
					P = c[Y][X]; r[Y][X] = 1; q.push(make_pair(X, Y));
					if (P != '.') {
						if (P == 'o') { s++; }
						else if (P == 'v') { w++; }
					}
				}
			}
		}
	}
	if (s > w) { S += s; }
	else { W += w; }
}

int main() {
	ios::sync_with_stdio(false);
	int R, C; cin >> R >> C;
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			cin >> c[n][m];
			if (c[n][m] == '#') { r[n][m] = 1; }
		}
	}
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			if (!r[n][m]) { V(m, n, C, R); }
		}
	}
	cout << S << ' ' << W;
	return 0;
}
/* ■ 설명 ■
[오답 원인]
11번 째 줄 x축, y축 거꾸로 작성
*/
