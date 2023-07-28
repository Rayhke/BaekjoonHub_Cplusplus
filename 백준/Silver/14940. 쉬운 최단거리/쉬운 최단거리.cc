#include <iostream>
#include <queue>
using namespace std;

int w[1000][1000];
bool r[1000][1000];

void B(int m, int n, int M, int N) {
	queue <short> x, y; x.push(m); y.push(n); w[n][m] = 0;
	while (!x.empty() && !y.empty()) {
		short X = x.front(), Y = y.front(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < M) { if (r[Y][XU]) { x.push(XU); y.push(Y); w[Y][XU] = w[Y][X] + 1; } }
			if (XD > -1) { if (r[Y][XD]) { x.push(XD); y.push(Y); w[Y][XD] = w[Y][X] + 1; } }
			if (YU < N) { if (r[YU][X]) { x.push(X); y.push(YU); w[YU][X] = w[Y][X] + 1; } }
			if (YD > -1) { if (r[YD][X]) { x.push(X); y.push(YD); w[YD][X] = w[Y][X] + 1; } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	short x, y, z; int N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> z;
			if (z != 2) {
				if (z & 1) { r[n][m] = 1; }
			}
			else { x = m; y = n; r[n][m] = 1; }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (r[n][m]) { w[n][m] = -1; }		// 아래와 같은 문제를 피해가기 위해 밟을 수 있는 땅만 ' -1 ' 으로 값 넣도록 변경
		}
	}
	B(x, y, M, N);
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << w[n][m] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
/* ■ 설명 ■
[오답 원인]
36번 줄에 도달하지 못하는 위치를 미리 세팅 해두고자 ' -1 ' 값을 넣은 것 까진 좋은 데,
벽 까지 ' -1 ' 을 할당 해버려서 오답이 나온 것이다. (벽은 ' 0 ' 을 출력 하면 된다.)
*/
