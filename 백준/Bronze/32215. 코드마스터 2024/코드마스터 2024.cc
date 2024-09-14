#include <iostream>

int main() {
	int N, M, K, Sum; std::cin >> N >> M >> K;
	Sum = M * K; Sum += M;
	std::cout << Sum;
	return 0;
}