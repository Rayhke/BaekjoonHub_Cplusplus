#include <iostream>
using namespace std;

int main() {
	int a[100] = {}, b, c, d = 0, e = 0, N, M;
	cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = 0; n < N - 1; n++) {				// 우선 내림차 순으로 정렬한다.
		b = n;
		for (int m = n + 1; m < N; m++) {
			if (a[b] < a[m]) { b = m; }
		}
		c = a[n];
		a[n] = a[b];
		a[b] = c;
	}
	for (int n = 0; n < N; n++) {
		for (int m = n + 1; m < N; m++) {
			for (int l = m + 1; l < N; l++) {
				d = a[n] + a[m] + a[l];			// 큰 값 부터 더하는 방식으로 경우의 수를 전부 대입하고,
				if (d <= M && e < d) { e = d; }		// [M] 보단 작거나 같으면서도, 최댓값 [d] 보다 크면 값 대입 (큰 값으로 부터 시작 했기에 계속 더해질 것이다.)
				else if (e > d) { break; }		// 그러다가 만약, 최댓값 [d] 보다 작은 경우의 수만 남으면 비로소 종료한다.
			}
		}
	}
	if (e != 0) { cout << e; }
	return 0;
}
/* ■ 설명 ■



*/
