#include <iostream>
#include <vector>
#define LD long double
#define PAIR pair<LD, LD>
using namespace std;

vector <PAIR> v;

LD CCW(PAIR& P1, PAIR& P2, PAIR& P3) {
	LD M = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	M -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
	return M;
}

int main() {
	ios::sync_with_stdio(false);
	int N, x, y; LD Area = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	for (int n = 1; n < N - 1; n++) {
		Area += CCW(v[0], v[n], v[n + 1]) / 2;
	}
	cout << fixed;
	cout.precision(1);
	cout << abs(Area);
	return 0;
}