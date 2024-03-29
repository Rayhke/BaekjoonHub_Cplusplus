#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool v[50][50];
int P = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };

void B(int m, int n, int M, int N) {
	vector <vector<bool>> r(N, vector<bool>(M, 0));
	vector <vector<int>> w(N, vector<int>(M, 0));
	queue <pair<int, int>> q; q.push({ m, n }); w[n][m] = 0; r[n][m] = 1;
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (v[Y][X] && !r[Y][X]) { r[Y][X] = 1; w[Y][X] = w[y][x] + 1; q.push({ X,Y }); }
			}
		}
		P = (w[y][x] > P) ? w[y][x] : P;
	}
}

int main() {
	ios::sync_with_stdio(false);
	char c; int N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> c;
			if (c == 'L') { v[n][m] = 1; }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (v[n][m]) { B(m, n, M, N); }
		}
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■

[검사용 코드]
(11번 줄)
cout << '[' << m << ' ' << n << " : 출발 지점]\n\n";				// 시작 위치 체크

(19번 줄)
cout << x << ' ' << y << " → " << X << ' ' << Y << " = " << w[Y][X] << '\n';	// 현재 위치에서 특정 방향으로 갔을 때, 비용 출력

(23번 줄)
for (int y = 0; y < N; y++) {							// 방문한 전체 맵 비용 보기용
		for (int x = 0; x < M; x++) {
			if (x == m && y == n) { cout << "#" << ' '; }
			else { cout << w[y][x] << ' '; }
		}
		cout << '\n';
	}
	cout << "====================================\n";
*/
