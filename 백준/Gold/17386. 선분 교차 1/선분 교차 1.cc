#include <iostream>
#define LL long long
#define Point pair<LL, LL>
using namespace std;

int CCW(Point& P1, Point& P2, Point& P3) {
	LL T = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	T -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
	if (T > 0) { return 1; }
	else if (T < 0) { return -1; }
	return 0;
}

int main() {
	int V1, V2; Point L1[2], L2[2];
	for (int n = 0; n < 2; n++) {
		cin >> L1[n].first >> L1[n].second >> L2[n].first >> L2[n].second;
	}
	V1 = CCW(L1[0], L2[0], L1[1]) * CCW(L1[0], L2[0], L2[1]);
	V2 = CCW(L1[1], L2[1], L1[0]) * CCW(L1[1], L2[1], L2[0]);
	if (V1 < 0 && V2 < 0) { cout << 1; }
	else { cout << 0; }
	return 0;
}