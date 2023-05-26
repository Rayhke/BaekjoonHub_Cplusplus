#include <iostream>
using namespace std;

int main() {
	int a, b, c, p1 = 100, p2 = 100;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> c;
		if (b == c) { continue; }
		else if (b > c) { p2 = p2 - b; }
		else { p1 = p1 - c; }
	}
	cout << p1 << "\n" << p2;
	return 0;
}
/* ■ 설명 ■
[p1] 과 [p2] 는 각각 100점으로 시작하며,
서로 각자의 주사위 [b], [c] 를, 횟수는 [a] 번 까지 동시에 던져서
주사위 값이 크게 나온 쪽이, 나온 주사위 값 만큼
점수를 감점 시키며 최종 점수를 결산하여 출력할 것.
*/
