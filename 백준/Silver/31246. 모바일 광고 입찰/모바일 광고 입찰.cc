#include <iostream>
#include <algorithm>
using namespace std;

int P[100000];

int main() {
	ios::sync_with_stdio(false);
	int N, K,A, B, Plus = 0, Count = 0; cin >> N >> K;
	for (int n = 0; n < N; n++) {
		cin >> A >> B; P[n] = B - A;
	}
	sort(P, P + N);
	for (int n = 0; n < N; n++) {
		if (K <= Count) break;
		if (Plus < P[n]) Plus = P[n];
		Count++;
	}
	cout << Plus;
	return 0;
}