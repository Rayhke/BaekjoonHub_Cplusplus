#include <iostream>

int main() {
	int A1, A2, C, N; std::cin >> A1 >> A2 >> C >> N;
	std::cout << ((A1 * N + A2 <= C * N) && (A1 <= C) ? 1 : 0);
	return 0;
}