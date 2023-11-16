#include <iostream>
using namespace std;

int main() {
	int N, M = 1e8, L = 9, P = 0; cin >> N;
	while (1) {
		if (M <= N) { P += (N - M + 1) * L; break; }
		M /= 10; L--;
	}
	M /= 10; L--;
	for (int m = M; m > 0; m /= 10) { P += 9 * m * L; L--; }
	cout << P;
	return 0;
}