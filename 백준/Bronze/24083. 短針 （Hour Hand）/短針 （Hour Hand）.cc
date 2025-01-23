#include <iostream>

int main() {
	int A, B; std::cin >> A >> B;
	A = (A + B) % 12;
	std::cout << (A != 0 ? A : 12);
	return 0;
}