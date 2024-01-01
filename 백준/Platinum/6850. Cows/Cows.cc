#include <iostream>
#include <vector>
#include <algorithm>
#define LL long long
#define PAIR pair<LL, LL>
using namespace std;

vector <PAIR> v, w;

LL CCW(PAIR& P1, PAIR& P2, PAIR& P3) {
	LL M = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	M -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
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
	int N, R; LL x, y; double Area = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	sort(v.begin() + 1, v.end(), P);
	for (auto& n : v) {
		while (w.size() > 1) {
			PAIR P2 = w.back(); w.pop_back();
			PAIR P1 = w.back();
			if (CCW(P1, P2, n) > 0) {
				w.push_back(P2); break;
			}
		}
		w.push_back(n);
	}
	for (int n = 1; n < w.size() - 1; n++) {
		Area += CCW(w[0], w[n], w[n + 1]) / (double)2;
	}
	R = abs(Area) / 50;
	cout << R;
	return 0;
}