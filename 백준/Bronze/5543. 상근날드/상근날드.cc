#include <iostream>
using namespace std;

int main() {
	int a, b, c = 2000, d = 2000;
	for (int n = 0; n < 3; n++) { cin >> a; c = (a < c) ? a : c; }
	for (int n = 0; n < 2; n++) { cin >> b; d = (b < d) ? b : d; }
	cout << c + d - 50;
	return 0;
}
/* ■ 설명 ■
[a] 는 햄버거, [b] 는 음료수라고 할 때
가장 싼 세트([c] 햄버거, [d] 음료수)를 구성하여, 마지막에 50원을 뺀다.
*/
