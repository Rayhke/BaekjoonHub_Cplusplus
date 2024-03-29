#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a[100][100] = {}, b[100][100] = {}, N, M, K, P = 0;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> a[n][m];
		}
	}
	cin >> M >> K;
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < K; m++) {
			cin >> b[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < K; m++) {
			P = 0;
			for (int l = 0; l < M; l++) {
				P += a[n][l] * b[l][m];
			}
			cout << P << ' ';
		}
		cout << '\n';
	}
	return 0;
}
/* ■ 설명 ■
이산수학의 행렬 곱셈의 공식을 코드로 구현한 것이다.
문제의 조건 상 반드시 [a] 의 열과 [b] 의 행의 크기는 동일하며,
이러한 조건을 이용하여 구현하도록 하라.
=================================================================================
[오답 원인]
배열 끼리의 곱 (a × b) 은 a와 b의 행, 열이 같으냐 or 열, 행이 같냐에 따라
언제든지 배열 끼리의 곱의 크기 결과는 바뀔 수 있으니 주의할 것.

즉, 그 외에 a과 b의 각각 행 열 사이즈는 다를 수도 있단 거다.				// [a : 행3 열2] × [b : 행2 열8] 이라던가
=================================================================================
[반례]

<입력>
3 2
1 2
3 4
5 6
2 3
-1 -2 0
0 0 3
<출력>
-1 -2 6		// (1 × -1) + (2 × 0) | (1 × -2) + (2 × 0) | (1 × 0) + (2 × 3)
-3 -6 12	// (3 × -1) + (4 × 0) | (3 × -2) + (4 × 0) | (3 × 0) + (4 × 3)
-5 -10 18	// (5 × -1) + (6 × 0) | (5 × -2) + (6 × 0) | (5 × 0) + (6 × 3)
=================================================================================
<입력>
2 3
-1 -2 0
0 0 3
3 2
1 2
3 4
5 6
<출력>
-7 -10		// (-1 × 1) + (-2 × 3) + (0 × 5) | (-1 × 2) + (-2 × 4) + (0 × 6)
15 18		// (0 × 1) + (0 × 3) + (3 × 5) | (0 × 2) + (0 × 4) + (3 × 6)
*/
