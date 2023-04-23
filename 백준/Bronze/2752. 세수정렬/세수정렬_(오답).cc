#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c) { cout << a << " " << b << " " << c << endl; return 0; } // a 와 b 와 c 가 모두 같을 때, 즉시 출력 후에 프로그램 종료
	d = (a > b) ? a : b; d = (d > c) ? d : c;	// a, b, c 중 가장 큰 값 담기
	e = (a < b) ? a : b; e = (e < c) ? e : c;	// a, b, c 중 가장 작은 값 담기

	cout << e << " ";				
	if (e < a && a < d) { cout << a << " "; }	// 중간 값 찾아서 출력
	else if (e < b && b < d) { cout << b << " "; }
	else { cout << c << " "; }
	cout << d << endl;
	return 0;
}
/* ■ 설명 ■
괜히 무리하게 코드를 최소화 하려 하지 말고,
정 모르겠으면, 모든 경우의 수를 고려하여 최대한 작성한 뒤에
불 필요한 부분을 검증해가며 차례대로 줄여갈 것...

이 쉬운 문제를 코드를 최소화 에 매달린 탓에, 여러 번 틀린 것이 아깝다..
*/
