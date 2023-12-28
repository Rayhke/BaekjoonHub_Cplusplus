#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define LL long long
#define PAIR pair<LL, LL>	// first : y축, second : x축
using namespace std;

vector <PAIR> v;
stack <PAIR> s;

LL CCW(PAIR& P1, PAIR& P2, PAIR& P3) {
	LL M = P1.second * P2.first + P2.second * P3.first + P3.second * P1.first;
	M -= P1.second * P3.first + P2.second * P1.first + P3.second * P2.first;
	return M;
}

bool P(PAIR& P2, PAIR& P3) {
	LL M = CCW(v[0], P2, P3);
	if (M == 0) {								// 점 위치가 서로 평행 한다면, 길이가 더 짧은 쪽이 앞으로 오도록 정렬
		if (P2.first != P3.first) { return P2.first < P3.first; }
		return P2.second < P3.second;
	}
	return M > 0;								// 반시계를 이루는 점부터 앞으로 오도록 정렬
}

int main() {
	ios::sync_with_stdio(false);
	int N; LL x, y; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		v.push_back({ y,x });
	}
	sort(v.begin(), v.end());			// 특별히 정렬 추가 조건을 안 붙여도 되는 이유가 y, x 원소 순으로 이루어짐
	sort(v.begin() + 1, v.end(), P);
	for (auto& n : v) {
		while (s.size() > 1) {
			PAIR P2 = s.top(); s.pop();
			PAIR P1 = s.top();
			if (CCW(P1, P2, n) > 0) {
				s.push(P2); break;	// CCW 조건에 성립 하므로, 중간 점은 남겨둠
			}
		}
		s.push(n);				// 여기로 도달했단 것은 앞의 CCW 조건에 성립하여, 통과했단 의미이므로 끝 점을 넣어주는 작업
	}
	cout << s.size();
	return 0;
}
