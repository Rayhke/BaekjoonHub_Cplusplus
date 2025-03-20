#include <iostream>
using namespace std;

int main() {
	int N, Sum = 0; string S, P; cin >> N >> S >> P;
	for (int n = 0; n < N; n++) {
		if (S[n] != P[n]) { continue; }
		Sum += (S[n] == 'C') ? 1 : 0;
	}
	cout << Sum;
	return 0;
}