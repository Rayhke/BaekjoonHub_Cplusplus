#include <iostream>
#include <vector>
using namespace std;

string S, K = "DKSH";
vector <int> W(5, 0);

void KMP() {
	int n = 0, m = 0, P = 0;
	const int N = S.length(), M = 4;
	while (n < N) {
		while (m > -1 && S[n] != K[m]) { m = W[m]; }
		n++; m++;
		if (m == M) { P++; m = W[m]; }
	}
	cout << P;
}

int main() {
	cin >> S; W[0] = -1; KMP();
	return 0;
}