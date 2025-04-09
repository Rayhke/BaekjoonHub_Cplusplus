#include <iostream>
using namespace std;

string S, P, Result;

int main() {
	int N, M = 0; cin >> N >> S >> P;
	for (int n = 0; n < N; n++) {
		if (S[n] == P[n]) {
			Result += 117 + M; M = 0;
		}
		S[n] == P[n] + 1 ? M++ : M;
	}
	if (M != 0) { Result += 117 + M; }
	cout << Result;
	return 0;
}
