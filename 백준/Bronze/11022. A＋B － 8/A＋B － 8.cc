#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> c;
	for (int n = 1; n <= c; n++) {
		cin >> a >> b;
		cout << "Case #" << n << ": " << a << " + " << b << " = " << (a + b) << endl;
	}
	return 0;
}
/* ■ 설명 ■
각 테스트 케이스 별로
입력 받은 a 와 b 값을 덧셈 연산을 하여
출력할 것
*/
