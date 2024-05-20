#include <iostream>

int main() {
	int A, B; std::cin >> A >> B; A += B; B = 1;
	while (A /= 10) { B++; }
	std::cout << B;
	return 0;
}