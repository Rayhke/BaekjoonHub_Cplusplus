#include <iostream>
using namespace std;

int main() {
	int a[5] = {}, b, c, d = 0;
	for (int n = 0; n < 5; n++) { cin >> a[n]; d += a[n]; }
	for (int n = 0; n < 5; n++) {
		b = n;
		for (int m = n + 1; m < 5; m++) {
			if (a[b] > a[m]) { b = m; }	// 배열 중에 가장 작은 값이 존재하는 자릿값을 찾음
		}
		c = a[n];				// 오름차 기준 첫 번째 자리가 낮은 값으로 시작 해야되니
		a[n] = a[b];				// 자리 교체
		a[b] = c;
	}
	cout << (double)d / 5 << endl << a[2];
	return 0;
}
/* ■ 설명 ■
[int a[5]] 배열에 값을 담고,
정렬을 한 후에 [int a[5]] 배열의 중앙값을 출력하고,
마지막으론 배열의 평균을 구한다. (소수점 자리가 나올 수도 있다.)
*/
