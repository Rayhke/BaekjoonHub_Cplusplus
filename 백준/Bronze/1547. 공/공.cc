#include <iostream>
using namespace std;

int main() {
	int a[3] = { 1, }, b, c, d, e;
	cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> c >> d;
		e = a[c - 1];
		a[c - 1] = a[d - 1];
		a[d - 1] = e;
	}
	for (int n = 0; n < 3; n++) {
		if (a[n] == 1) { cout << (n + 1); break; }
	}
	return 0;
}
/* ■ 설명 ■
룰은 야바위와 같으며, 컵이 3개가 있을 때
[b] 번 컵 위치를 변경 하여, [c] 번 컵과 [d] 번 컵을 스위칭(자리 교체)함
그렇게 최종적으로 [b] 번 섞은 후에, 공이 담긴 컵 번호[n + 1]를 출력하는 것.
*/
