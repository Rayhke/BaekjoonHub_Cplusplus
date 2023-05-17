#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	if (M == 1 || M == 2) { cout << "NEWBIE!"; }
	else {
		if (N < M) { cout << "TLE!"; }
		else { cout << "OLDBIE!"; }
	}
	return 0;
}
/* ■ 설명 ■
문제의 내용을 자세히 읽어 보면 [M] 이 '1' 또는 '2' 면
"NEWBIE!" 를 출력 하는 것이지 [N] 보다 작다고 출력 하는 것이 아니다.
◆ 조건을 똑바로 읽어 볼 것... ◆

그 외에는 크게 별 문제 없다.
*/
