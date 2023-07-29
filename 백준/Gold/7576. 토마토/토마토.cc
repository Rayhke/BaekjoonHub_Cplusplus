#include <iostream>
#include <queue>
using namespace std;

int v[1000][1000], DX[4] = { 1,0,-1,0 }, DY[4] = { 0,1,0,-1 };			// 현재 위치에서 동, 서, 남, 북을 가르키는 역할 
queue <pair<int, int>> q;

void B(short M, short N) {
	while (!q.empty()) {
		short X = q.front().first, Y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			short XP = X + DX[n], YP = Y + DY[n];
			if (-1 < XP && XP < M && -1 < YP && YP < N) {
				if (v[YP][XP] == 0) {
					v[YP][XP] = v[Y][X] + 1;
					q.push(make_pair(XP, YP));
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	short N, M; int P = 0; cin >> M >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> v[n][m];
			if (v[n][m] == 1) { q.push(make_pair(m, n)); }
		}
	}
	B(M, N);
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (v[n][m] == 0) { cout << -1; return 0; }
			P = (v[n][m] > P) ? v[n][m] : P;
		}
	}
	cout << P - 1;
	return 0;
}
/* ■ 설명 ■
아직은 나에게 이른 문제인 듯 하다.
추후 최적화 이론을 더욱 학습한 후 재도전 하길 희망한다.

[오답 원인]
메모리 최적화 실패
*/
