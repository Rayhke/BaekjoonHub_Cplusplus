#include <iostream>
using namespace std;

int main() {
	int a[1000] = {}, b, c, N;
	cin >> N;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = 0; n < N; n++) {
		b = n;
		for (int m = n + 1; m < N; m++) {
			if (a[b] > a[m]) { b = m; }
		}
		c = a[n];
		a[n] = a[b];
		a[b] = c;
	}
	for (int n = 0; n < N; n++) {
		cout << a[n] << "\n";
	}
	return 0;
}
/* ■ 설명 ■
간단한 오름차순 정렬 문제
*/
