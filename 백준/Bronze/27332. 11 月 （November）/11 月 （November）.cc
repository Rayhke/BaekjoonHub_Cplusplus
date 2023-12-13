#include <iostream>

int main() {
	int A, B, P = 0; std::cin >> A >> B;
	if (A + B * 7 < 31) { P = 1; }
	std::cout << P;
	return 0;
}