#include <iostream>
using namespace std;

int main() {
	int N; string S, P, K = ""; cin >> S >> P;
	N = min(S.length(), P.length());
	for (int n = 0; n < N; n++) {
		K += n & 1 ? P[n] : S[n];
	}
	cout << K;
	return 0;
}