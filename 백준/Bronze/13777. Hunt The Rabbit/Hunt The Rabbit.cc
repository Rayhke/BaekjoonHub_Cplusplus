#include <iostream>
using namespace std;

void s(int a[], int c) {
	int mn = 0, md, mx = 49;
	while (mn <= mx) {
		md = (mn + mx) / 2;
		if (a[md] == c) { cout << a[md] << '\n'; return; }
		else if (a[md] < c) { cout << a[md] << " "; mn = md + 1; }
		else { cout << a[md] << " "; mx = md - 1; }
	}
	return;
}

int main() {
	int a[50] = {}, b[50] = {}, c, d = 0;
	for (int n = 0; n < 50; n++) { a[n] = n + 1; }
	do {
		cin >> c;
		if (c != 0) { s(a, c); }
	} while (c);
	return 0;
}
/* ■ 설명 ■
이진 탐색을 활용하는 문제이며,
이진 탐색을 하면서 시도한 경우의 수를 시도한 순서대로 출력 하도록 한다.

그 후, 마지막으로 [c] 가 ' 0 ' 을 입력 받는 순간 작업은 종료 된다.
이러한 조건을 활용하여, [do while] 반복문을 사용하여, EOF 하도록 한다.
(자료의 끝을 검사 하도록.)
*/
