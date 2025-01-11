#include <iostream>

int main() {
	int T, N, A, D, Sum; std::cin >> T;
	while (T--) {
		std::cin >> N >> A >> D; Sum = A; A += D;
		while (--N) { Sum += A; A += D; }
		std::cout << Sum << '\n';
	}
	return 0;
}