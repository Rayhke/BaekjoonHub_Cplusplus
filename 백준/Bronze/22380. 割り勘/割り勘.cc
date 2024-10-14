#include <iostream>
using namespace std;

int main() {
	int N, M, Sum, In;
	while (1) {
		cin >> N >> M;
		if (N + M == 0) { break; }
		Sum = 0; M /= N;
		for (int n = 0; n < N; n++) {
			cin >> In; Sum += (In < M) ? In : M;
		}
		cout << Sum << '\n';
	}
	return 0;
}