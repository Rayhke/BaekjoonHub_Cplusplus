#include <iostream>
#include <queue>
using namespace std;

short w[100][100];
bool r[100][100];

void B(int N, int M) {
	queue <short> x, y; x.push(0); y.push(0); w[0][0] = 1;
	while (!x.empty() && !y.empty()) {
		short X = x.front(), Y = y.front(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < M) { if (r[Y][XU]) { x.push(XU); y.push(Y); w[Y][XU] = w[Y][X] + 1; } }
			if (XD > -1) { if (r[Y][XD]) { x.push(XD); y.push(Y); w[Y][XD] = w[Y][X] + 1; } }
			if (YU < N) { if (r[YU][X]) { x.push(X); y.push(YU); w[YU][X] = w[Y][X] + 1; } }
			if (YD > -1) { if (r[YD][X]) { x.push(X); y.push(YD); w[YD][X] = w[Y][X] + 1; } }
			if (XU == M && YU == N) { break; }
		}
	}
}

int main() {
	char c; int N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> c;
			if (c != '0') { r[n][m] = 1; }
		}
	}
	B(N, M);
	cout << w[N - 1][M - 1];
	return 0;
}
/* ■ 설명 ■
[작동 체크용 코드] (31번 줄 이후에 삽입)
for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << w[n][m] << ' ';
		}
		cout << '\n';
	}
*/
