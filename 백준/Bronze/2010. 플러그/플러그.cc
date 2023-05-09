#include <iostream>
using namespace std;

int s(int a, int b) {
	return b + (a - 1);
}

int main(int argc, char* argv[]) {
	int N, a, b = 1;
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> a;
		if (a == 1) { continue; } // 멀티탭 플러그가 한자리면 즉시 건너뛰기
		else { b = s(a, b); }
	}
	cout << b << endl;
	return 0;
}
/* ■ 설명 ■
방 벽에 전선 코드 꽂을 자리가 하나 밖에 없다고 가정하고,
멀티탭을 예시로 5칸 짜리를 꽂으면, 전선 코드 꽂는 자리가 1개에서 5개로 늘어나지만,
여기서 추가로 멀티탭 8칸 짜리를 5칸 짜리 멀티탭 한자리에 꽂으면,
5칸 짜리는 4칸만 사용 가능하고, 거기에 8칸이 추가되어
총 12칸을 사용 가능하다.

그렇다면 꽂는 자리가 하나 밖에 없는 데, 멀티탭 플러그 칸도 1칸이면
겹치기나 마찬가지이다.

코드 구조가 간결하고 
*/
