#include <iostream>

int main() {
	int N, P1 = 0, P2 = 1, P3 = 1; std::cin >> N;
	for (int n = 1; n < N; n++) {
		P3 = (P2 + P1) % 1000000007;
		P1 = P2; P2 = P3;
	}
	std::cout << P3 << ' ' << N - 2;
	return 0;
}