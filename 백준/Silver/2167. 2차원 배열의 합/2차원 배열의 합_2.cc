#include <iostream>
using namespace std;

int main() {
	int a[300][300] = {}, b, c, d, e[10000] = {}, x[2], y[2];
	cin >> b >> c;
	for (int n = 0; n < b; n++) {
		for (int m = 0; m < c; m++) {
			cin >> a[n][m];
		}
	}
	cin >> d;
	for (int n = 0; n < d; n++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1];
		for (int m = x[0] - 1; m < x[1]; m++) {
			for (int l = y[0] - 1; l < y[1]; l++) {
				e[n] = e[n] + a[m][l];
			}
		}
	}
	for (int n = 0; n < d; n++) { cout << e[n] << '\n'; }
	return 0;
}
/* ■ 설명 ■
[int a[300][300]] 배열에 담을 범위 값 [b][c](행렬) 를 입력하고,
[int a[n][m]] 배열 위치에 원소값을 담고

[d] 번 만큼
[int a[x[0]][y[0]]] 에서 ~ [int a[x[1]][y[1]]] 까지 연속으로 덧셈을 하여,		// 즉, 행열 시작 지점 [int a[x[0]][y[0]]] 와
[int e[n] 배열 위치에 누적합의 값을 담은 후에 마지막에 출력하라.			// 끝 지점 [int a[x[0]][y[0]]] 안의 값을 누적 덧셈 해라.
==============================================================================
허나 이러한 방식의 문제가 [for] 반복문을 3중첩으로 하는 작업으로 인해			// [총, 420ms 소요]
빅오(O(n³)) 연산이 매우매우 비효율적이라고 판단되며, 추후 최적화 해보는 걸로
*/
