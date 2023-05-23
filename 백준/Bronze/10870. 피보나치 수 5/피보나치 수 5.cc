#include <iostream>
using namespace std;

int main() {
	int a[21] = {}, n, m = 0;
	a[0] = 0; a[1] = 1; cin >> n;
	if (n > 1) {
		for (int l = 2; l <= n; l++) { a[l] = a[l - 1] + a[l - 2]; m = l; }
	}
	else { m = n; }		// 주의 해야할 점, 피보나치 수 1번 째 자리는 ' 1 '이며,
	cout << a[m];		// 제출한 백준 문제에선 0번 째 자리에 나오는 값도 고려하는 듯 하다.
	return 0;
}
/* ■ 설명 ■
피보나치 수 공식을 이용한 배열 설계
*/
