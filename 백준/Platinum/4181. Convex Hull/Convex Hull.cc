#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define LL long long
#define PAIR pair<LL, LL>
using namespace std;

vector <PAIR> v, w;
stack <PAIR> s;

int CCW(PAIR& P1, PAIR& P2, PAIR& P3) {
	LL M = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	M -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
	if (M > 0) { return 1; }
	else if (M < 0) { return -1; }
	return 0;
}

bool P(PAIR& P2, PAIR& P3) {
	int M = CCW(v[0], P2, P3);
	if (M == 0) {
		if (P2.first != P3.first) { return P2.first < P3.first; }
		return P2.second < P3.second;
	}
	return M > 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char C; int N; LL x, y; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y >> C;
		if (C == 89) { v.push_back({ x,y }); }
	}
	sort(v.begin(), v.end());
	sort(v.begin() + 1, v.end(), P);
	for (auto& n : v) {
		while (w.size() > 1) {						// 왜 이런 식으로 조건이 이루어 지느냐?
			if (CCW(w[w.size() - 2], w.back(), n) >= 0) { break; }	// 반시계 방향과 직선의 경우는 이미 성립하므로 통과
			s.push(w.back());					// 반대로 볼록 껍질에 속하지만 특정 경우에 의해 
            w.pop_back();
		}
		w.push_back(n);
	}
	while (!s.empty()) {
		w.push_back(s.top()); s.pop();
	}
	cout << w.size() << '\n';
	for (const auto& n : w) {
		cout << n.first << ' ' << n.second << '\n';
	}
	return 0;
}
/* ■ 설명 ■
볼록 껍질을 그레이엄 스캔(Graham Scan)으로 방문하는 형식인 동시에
볼록 껍질을 이루는 모든 점을 출력하도록 해야 한다.
*/
