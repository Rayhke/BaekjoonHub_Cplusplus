#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c) { cout << a; }		// 만약 a, b, c 값이 전부 동일 하다면, 하나 출력 
	else {
		f = a + b + c;					// a + b + c 값 전부 더하기
		d = (a < b) ? a : b; d = (d < c) ? d : c;	// 가장 큰 값 찾기
		e = (a > b) ? a : b; e = (e > c) ? e : c;	// 가장 작은 값 찾기
		cout << (f - (d + e)) << endl;
	}
	return 0;
}
/* ■ 설명 ■	 // 백준 - 브론즈 5 (6840번)
제일 작은 그릇의 무게 순으로
아기 곰, 엄마 곰, 아빠 곰 그릇이라고 한다면
즉, 3개의 입력 값 중 중간 값을 찾아라
*/
