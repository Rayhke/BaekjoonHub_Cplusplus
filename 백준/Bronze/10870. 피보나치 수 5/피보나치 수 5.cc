#include <iostream>
using namespace std;

int main() {
	int a[21] = {}, n, m = 0;
	a[0] = 0; a[1] = 1; cin >> n;
	if (n > 1) {
		for (int l = 2; l <= n; l++) {
			a[l] = a[l - 1] + a[l - 2]; m = l;
		}
	}
	else { m = n; }
	cout << a[m];
	return 0;
}
/* ■ 설명 ■
피보나치 수 공식을 이용한 배열 설계
*/
