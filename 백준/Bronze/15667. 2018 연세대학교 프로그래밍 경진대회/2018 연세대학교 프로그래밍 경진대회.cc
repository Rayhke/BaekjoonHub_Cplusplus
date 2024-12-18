#include <iostream>

int main() {
	int N, V = 1; std::cin >> N;
	while ((V * V) + V + 1 != N) { V++; }
	std::cout << V;
	return 0;
}