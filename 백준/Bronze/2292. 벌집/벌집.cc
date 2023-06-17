#include <iostream>
using namespace std;

inline int s(int M, int L) { return M * L; }

int main() {
	int N, M = 1, L = 6, P = 1; cin >> N;
	while (N > P) { P = P + (s(M, L)); M++; }
	cout << M;
	return 0;
}