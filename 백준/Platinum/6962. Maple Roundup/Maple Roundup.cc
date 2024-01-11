#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define LL long long
#define PAIR pair<LL, LL>
using namespace std;

double X, Y, Perimeter = 0;
vector <PAIR> v, w;

void Pythagoras(PAIR& P1, PAIR& P2) {
	X = abs(P1.first - P2.first);
	Y = abs(P1.second - P2.second);
	if (X == 0) { Perimeter += Y; }
	else if (Y == 0) { Perimeter += X; }
	else { Perimeter += sqrtl((X * X) + (Y * Y)); }
}

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
	int N, T; LL x, y; cin >> T;
	cout << fixed;
	cout.precision(2);
	while (T--) {
		cin >> N;
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
		for (int n = 1; n < w.size(); n++) {
			Pythagoras(w[n - 1], w[n]);
		}
		Pythagoras(w[0], w[w.size() - 1]);
		cout << Perimeter << '\n';
		Perimeter = 0;
		v = vector<PAIR>();
		w = vector<PAIR>();
	}
	return 0;
}