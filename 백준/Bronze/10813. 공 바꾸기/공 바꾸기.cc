#include <iostream>
using namespace std;

int main() {
	int a[101] = {}, n, m, o, p, q;
	cin >> n >> m;
	for (int b = 1; b <= n; b++) { a[b] = b; }	// 이렇게 설계한 이유는 - ◆ 해설 1 ◆ 참고
	for (int c = 0; c < m; c++) {
		cin >> o >> p;
		q = a[o];
		a[o] = a[p];
		a[p] = q;
	}
	for (int d = 1; d <= n; d++) { cout << a[d] << " "; }
	return 0;
}
/* ■ 설명 ■
배열 알고리즘을 응용하기

◆ 해설 1 ◆
굳이 배열 자리 0번 부터 담지 않은 이유는
배열 자릿값과 공 번호와 통일하기 위해서이고
만약 통일 시키지 않으면, 공 번호와 배열 자릿값을
변경할 때 마다, '-1' 연산을 생략하기 위함
*/
