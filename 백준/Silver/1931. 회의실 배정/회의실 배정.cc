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
	if (N > 1) {
		while (L != N) {
			if (v[M].first <= v[L].second) { P++; M = L; L = M + 1; }
			else { L++; }
		}
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
각 회의 시간이 겹치지 않게 끔 한다는 것은
[회의1의 종료 시간]과 [회의2의 시작 시간]이 최대한 겹치지 않는	// 끝나는 시간과 시작 시간이 똑같은 건 문제 없다.
경우의 수를 세어 가며
*/
