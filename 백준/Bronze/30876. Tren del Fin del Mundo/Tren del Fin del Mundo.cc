#include <iostream>
#include <algorithm>
using namespace std;
using PAIR = pair<short, short>;

PAIR Point[1000];

bool Rule(PAIR& P1, PAIR& P2) {
	if (P1.second != P2.second) {
		return P1.second < P2.second;
	}
	return P1.first < P2.first;
}

int main() {
	int N, X, Y; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> X >> Y;
		Point[n] = { X, Y };
	}
	sort(Point, Point + N, Rule);
	cout << Point[0].first << ' ' << Point[0].second;
	return 0;
}