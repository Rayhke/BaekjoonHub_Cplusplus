#include <iostream>
using namespace std;

int main() {
	int N, A, B, P = 0; cin >> N >> A >> B;
	while (1) {
		if (N > 0) {
			if (A > 1) { N--; A -= 2; P++; }
			else if (B > 0) { N--; B--; P++; }
			else { break; }
		}
		else { break; }
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
[치킨 1 = 콜라 2 or 맥주 1] 가 필요하다.
그렇다면 최소 한마리의 치킨과 음료 (콜라 2, 맥주 1) 이 요구된다.
*/
