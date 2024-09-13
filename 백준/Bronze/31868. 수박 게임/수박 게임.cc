#include <iostream>

int main() {
	int N, K; std::cin >> N >> K;
	while (--N) { K /= 2; }
	std::cout << K;
	return 0;
}