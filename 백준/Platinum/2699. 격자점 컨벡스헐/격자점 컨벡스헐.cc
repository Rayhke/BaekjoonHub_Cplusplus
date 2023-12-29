#include <iostream>
#include <vector>
#include <algorithm>
#define LL long long
#define PAIR pair<LL, LL>
using namespace std;

vector <PAIR> v, w;

LL CCW(PAIR& P1, PAIR& P2, PAIR& P3) {
	LL M = P1.second * P2.first + P2.second * P3.first + P3.second * P1.first;
	M -= P1.second * P3.first + P2.second * P1.first + P3.second * P2.first;
	return M;
}

bool T1(PAIR& P1, PAIR& P2) {
	if (P1.first != P2.first) { return P1.first > P2.first; }
	return P1.second < P2.second;
}

bool T2(PAIR& P2, PAIR& P3) {
	LL M = CCW(v[0], P2, P3);
	if (M == 0) { return T1(P2, P3); }
	return M < 0;
}

int main() {
	int P, N; LL x, y; cin >> P;
	while (P--) {
		cin >> N;
		for (int n = 0; n < N; n++) {
			cin >> x >> y;
			v.push_back({ y,x });
		}
		sort(v.begin(), v.end(), T1);
		sort(v.begin() + 1, v.end(), T2);
		for (auto& n : v) {
			while (w.size() > 1) {
				PAIR P2 = w.back(); w.pop_back();
				PAIR P1 = w.back();
				if (CCW(P1, P2, n) < 0) {
					w.push_back(P2); break;
				}
			}
			w.push_back(n);
		}
		cout << w.size() << '\n';
		for (const auto& n : w) {
			cout << n.second << ' ' << n.first << '\n';
		}
		v = vector<PAIR>(); w = vector<PAIR>();
	}
	return 0;
}
/* ■ 설명 ■
[오답 원인]
반시계 방향(CCW) 기준이 아닌, 시계 방향(CW) 기준으로 방문 해야 합니다.
*/
