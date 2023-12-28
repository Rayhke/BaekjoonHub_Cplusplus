#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define LL long long
#define PAIR pair<LL, LL>
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
	if (M == 0) {
		if (P2.first != P3.first) { return P2.first < P3.first; }
		return P2.second < P3.second;
	}
	return M > 0;
}

int main() {
	ios::sync_with_stdio(false);
	int N; LL x, y; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		v.push_back({ y,x });
	}
	sort(v.begin(), v.end());
	sort(v.begin() + 1, v.end(), P);
	for (auto& n : v) {
		while (s.size() > 1) {
			PAIR P2 = s.top(); s.pop();
			PAIR P1 = s.top();
			if (CCW(P1, P2, n) > 0) {
				s.push(P2); break;
			}
		}
		s.push(n);
	}
	cout << s.size();
	return 0;
}