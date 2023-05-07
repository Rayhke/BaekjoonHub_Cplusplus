#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b;
		if (b == 1) { c++; }
		else { d++; }
	}
	if (c > d) { cout << "Junhee is cute!" << endl; }
	else { cout << "Junhee is not cute!" << endl; }
	return 0;
}
/* ■ 설명 ■	 // 백준 - 브론즈 3 (10886번)
a의 값 만큼, b를 반복 입력하고

b가 입력 받은 값이 0 과 1 중 어느 것이 많은가에 따라
출력하는 결과값이 다를 것.
*/
