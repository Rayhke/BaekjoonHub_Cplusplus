#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, P[1001], Min = 1, Max = 0, Value; cin >> N >> M;
	for (int m = 0; m < M; m++) { cin >> P[m]; }
	sort(P, P + M, greater<int>());
	Value = P[0];
	for (int m = 1; m < M; m++) {
		if (m >= N) { break; }
		Value = P[m] * (m + 1);
		if (Max <= Value) { Max = Value; Min = P[m]; }
	}
	cout << Min << ' ' << Max;
	return 0;
}
/* ■ 설명 ■
1. 최대의 수익을 올리면서도, 달걀 하나의 가격을 최대한 낮추어 책정한다.	(다르게 말하면 최대한 달걀을 많이 팔면서 수익도 최대로)
2. 사고 싶은 사람은 많으나, 판매하고자 하는 달걀의 갯수가 모자란 경우.	(이것을 놓쳐서 오답, 위의 1번 조건에 너무 몰두 했다)
*/
