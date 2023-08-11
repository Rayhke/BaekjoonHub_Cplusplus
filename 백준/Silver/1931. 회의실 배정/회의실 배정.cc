#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector <pair<int, int>> v;
	int N, M = 0, L = 1, P = 1; cin >> N;
	for (int n = 0; n < N; n++) {
		int s, e; cin >> s >> e;
		v.push_back({ e,s });
	}
	sort(v.begin(), v.end());
	if (N > 1) {									// 만약 회의가 하나 밖에 없다면, 회의 스케쥴에 전혀 지장이 없을 것이기에 할 필요가 없다.
		while (L != N) {							// 투 포인터 형식을 따옴
			if (v[M].first <= v[L].second) { P++; M = L; L = M + 1; }	// (종료 조건을 ' M + 1 ' 으로 하면, 예상치 못한 오류가 발생 하므로 주의할 것)
			else { L++; }
		}
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
각 회의 시간이 겹치지 않게 끔 한다는 것은
[회의1의 종료 시간]과 [회의2의 시작 시간]이 최대한 겹치지 않는	// 조심 해야될 점은, 끝나는 시간과 시작 시간이 똑같은 건 문제 없다.
최대한 회의를 할 수 있는 경우의 수를 세는 것이다.

[작동 체크 참고용 코드]
(17번 째 줄)
cout << v[M].second << " ← " << v[M].first << '\n' << v[L].second << " ← " << v[L].first << "\n\n";
*/
