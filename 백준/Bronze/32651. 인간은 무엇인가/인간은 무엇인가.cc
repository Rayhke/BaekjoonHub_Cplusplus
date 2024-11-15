#include <iostream>

int main() {
	int N; std::cin >> N;
	std::cout << ((N > 100000 || N % 2024 != 0) ? "No" : "Yes");
	return 0;
}