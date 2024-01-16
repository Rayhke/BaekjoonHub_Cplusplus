#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define IB pair<int, bool>
#define II pair<int, int>
#define PAIR pair<II, IB>
using namespace std;

int V[1000];
vector <short> r;
vector <PAIR> v, w;

int CCW(II& P1, II& P2, II& P3) {
	int M = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	M -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
	if (M > 0) { return 1; }
	else if (M < 0) { return -1; }
	return 0;
}

bool T2(II& P2, II& P3) {
	if (P2.first != P3.first) { return P2.first < P3.first; }
	return P2.second < P3.second;
}

bool P(PAIR& P2, PAIR& P3) {
	int M = CCW(v[0].first, P2.first, P3.first);
	if (M == 0) {
		return T2(P2.first, P3.first);
	}
	return M > 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M = 1, x, y; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		v.push_back({ {x,y},{n,0} });
	}
	while (!v.empty()) {
		sort(v.begin(), v.end());
		sort(v.begin() + 1, v.end(), P);
		// for (auto& n : v) {
		for (int n = 0; n < v.size(); n++) {
			while (w.size() > 1 && r.size() > 1) {
				PAIR P2 = w.back(); w.pop_back();
				PAIR P1 = w.back();
				y = r.back(); r.pop_back();
				if (CCW(P1.first, P2.first, v[n].first) > 0) {
					w.push_back(P2); r.push_back(y); break;
				}
			}
			w.push_back(v[n]); r.push_back(n);
		}
		if (w.size() > 2) {
			for (const auto& n : w) { V[n.second.first] = M; }		// 층을 표시하는 역할
			for (const auto& n : r) { v[n].second.second = 1; }		// 사용한 원소 표시
			v.erase(remove_if(v.begin(), v.end(), [](const auto& n) {
				return n.second.second;					// 사용한 원소를 제거
			}), v.end());
		}
		else { break; }
		r = vector<short>(); w = vector<PAIR>(); M++;
	}
	for (int n = 0; n < N; n++) {
		cout << V[n] << ' ';
	}
	return 0;
}
