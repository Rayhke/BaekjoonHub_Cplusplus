#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[2001] = {}, b, c;
	cin >> b; a[1000] = 1;
	for (int n = 0; n < b; n++) {
		cin >> c; a[1000 + c] = c;
	}
	for (int n = 0; n < 2001; n++) {
		if (n != 1000 && a[n] != 0) { cout << a[n] << " "; }		// n의 범위값을 제대로 계산하지 않아서
		else if (n == 1000 && a[1000] != 1) { cout << a[1000] << " "; }	// 1이 2번 연속으로 출력됨
	}
	return 0;
}
/* ■ 설명 ■
중복 빼고 절댓값 1000보다 작거나 같은 범위란 건
카운팅 정렬을 하면 된다는 거다.
*/
