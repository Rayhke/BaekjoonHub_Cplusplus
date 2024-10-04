#include <iostream>

int main() {
	int A, B, D; std::cin >> A >> B >> D;
	A *= B; B = A / 12;
	if (A % 12 != 0) { B++; }
	std::cout << B * D;
	return 0;
}