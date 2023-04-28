#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	d = c - b;
	if (d > 0) { cout << ((a / d) + 1); }	// 굳이 이렇게 한 이유 : 0 또는, 음수 값으로 나누기를 방지하기 위하여
	else { cout << -1; }
	return 0;
}
/* ■ 설명 ■
고정비용, 가변비용, 상품 하나 당 값어치

총 수입(판매비용) >= 총 비용(=고정비용+가변비용)

(c * n) = (b * n) + a	|	c = b + (a / n)
(a / n) = c - b		|	a = (c - b) * n
n = (a / (c - b))

프로그래밍을 하기 전에 주어진 문제의 공식을 확실하게 찾아서 결과값을 증명한 후,
코드를 짤 것...
*/
