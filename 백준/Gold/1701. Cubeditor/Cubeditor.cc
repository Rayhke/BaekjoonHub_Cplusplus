#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, P = 0, R; string C, S;

void KMP() {
	int n = 0, M = S.size();
	vector <int> W(M);
	for (int m = 1; m < M; m++) {
		while (n > 0 && S[m] != S[n]) { n = W[n - 1]; }
		if (S[m] == S[n]) { W[m] = ++n; P = max(P, n); }
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> C; N = C.size();
	for (int n = 0; n < N; n++) {
		S = C.substr(n, N); KMP();
	}
	cout << P;
	return 0;
}