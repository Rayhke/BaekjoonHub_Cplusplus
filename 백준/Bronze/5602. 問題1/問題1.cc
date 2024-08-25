#include <iostream>
#include <algorithm>
#define PAIR pair<int, int>
using namespace std;

PAIR Arr[101];

bool P(PAIR& P1, PAIR& P2) {
	if (P1.first != P2.first) { return P1.first > P2.first; }
	return P1.second < P2.second;
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, In; cin >> N >> M;
	for (int m = 1; m <= M; m++) { Arr[m] = { 0,m }; }
	while (N--) {
		for (int m = 1; m <= M; m++) {
			cin >> In; Arr[m].first += In;
		}
	}
	sort(Arr + 1, Arr + M + 1, P);
	for (int m = 1; m <= M; m++) {
		cout << Arr[m].second << ' ';
	}
	return 0;
}