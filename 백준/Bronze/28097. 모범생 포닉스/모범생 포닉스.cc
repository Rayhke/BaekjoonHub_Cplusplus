#include <iostream>
using namespace std;

int main() {
	int N, M, L, R = 0;
	cin >> N; L = N - 1;
	while (N--) {
		cin >> M; R += M;
		if (L--) { R += 8; }
	}
	cout << R / 24 << ' ' << R % 24;
	return 0;
}