#include <iostream>
using namespace std;

void Mul(int N, string S) {
	while (--N) { S += '0'; }
	cout << S;
}

void Add(int N, string S) {
	int M = S.length() - 1;
	do {
		if (--N == 0) { S[M] = '1'; break; }
	} while (M--);
	cout << S;
}

int main() {
	char C; int N, M; string A, B, S;
	cin >> A >> C >> B;
	if (C == 42) {
		if (A.length() > B.length()) { N = B.length(); S = A; }
		else { N = A.length(); S = B; }
		Mul(N, S);
	}
	else {
		if (A.length() == B.length()) {
			A[0] = '2'; cout << A; return 0;
		}
		if (A.length() > B.length()) { N = B.length(); S = A; }
		else { N = A.length(); S = B; }
		Add(N, S);
	}
	return 0;
}