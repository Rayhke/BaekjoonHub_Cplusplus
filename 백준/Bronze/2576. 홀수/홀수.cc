#include <iostream>
using namespace std;

int main() {
	int N, M = 0, L = 100;
	for (int n = 0; n < 7; n++) {
		cin >> N;
		if (N & 1) { M += N; L = (N < L) ? N : L; }
	}
	if (M != 0) { cout << M << '\n' << L; }
	else { cout << -1; }
	return 0;
}