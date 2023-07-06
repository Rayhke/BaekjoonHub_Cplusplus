#include <iostream>
using namespace std;

int main() {
	bool ap = 0; char bp[51][51] = {}, cp[2] = { 'B','W' };
	int x = 0, y = 0, N, M, B = 0, W = 0, O = 0, P = 3000;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> bp[n][m];
		}
	}
	while (1) {
		for (int n = y; n < y + 8; n++) {
			for (int m = x; m < x + 8; m++) {
				if (bp[n][m] != cp[ap]) { B++; }	// 현재의 위치 값이 다른 경우
				else { W++; }				// 현재의 위치 값이 같은 경우
				ap = !ap;	// 반복할 때, 마다 cp의 값이 유기적으로 전환
			}
			ap = !ap;		// 이것 또한 포함
		}
		O = (B < W) ? B : W;
		P = (O < P) ? O : P; B = 0; W = 0; O = 0;
		if (x + 8 < M) { x++; }
		else if (y + 8 < N) { x = 0; y++; }
		else { break; }
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
거대한 체스판이 주어 졌지만
우리에게 필요한 건 8×8 크기의 체스판이 요구되며
그 중, 색깔 패턴이 일정하지 않아서 패턴에 맞게
색을 칠하는 작업을 한다 가정 했을 때

이러한 작업을 최소한으로 하는 경우의 수를 찾아내고
그 값을 출력하는 것이다.
*/
