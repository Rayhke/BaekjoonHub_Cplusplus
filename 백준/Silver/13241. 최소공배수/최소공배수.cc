#include <iostream>
using namespace std;

int main() {
	long long a, b, c, d, e = 1;
	cin >> a >> b;
	c = (a > b) ? a : b;
	d = (a < b) ? a : b;
	while (1) {
		if ((c * e) % d == 0) { break; }
		e++;
	}
	cout << c * e;
	return 0;
}
/* ■ 설명 ■
a 와 b 의 최소공배수를 구하는 코드이며, a 와 b 중에서
가장 큰 값 [c] 은 e 번 반복할 때 마다, 값의 폭이 빠르게 커져서 반복을 덜하도록 한다.
가장 작은 값 [d] 은 [c * e] 를 [d] 로 나누기하여 나머지가 없는 지 체크한다.
*/
