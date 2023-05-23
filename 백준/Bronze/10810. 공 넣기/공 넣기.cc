#include <iostream>
using namespace std;

int main() {
	int a[101] = {}, n, m, o, p, q;
	cin >> n >> m;
	for (int b = 0; b < m; b++) {
		cin >> o >> p >> q;
		for (int c = o; c <= p; c++) { a[c - 1] = q; }
	}
	for (int c = 0; c < n; c++) { cout << a[c] << " "; }
	return 0;
}
/* ■ 설명 ■
백준 - 브론즈 (10810번) 참고

앞의 문제와 규칙과 비슷한 데
[o] 번 째 바구니에서 [p] 번 째 바구니까지
모든 바구니에 [q] 번 공을 바구니에 전부 넣어주는 것

만약 이미 공이 담긴 바구니라면, 원래 있던 공을 빼고
새로운 공을 넣을 것 (즉, 배열 위치 값이 덮어져도 문제 없다.)
이외에 공이 담기지 않은 나머지 바구니들은 '0' 을 출력
*/
