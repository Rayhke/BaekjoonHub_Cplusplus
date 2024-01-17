#include <iostream>

int main() {
	char C = 'E'; int S1, S2;
	std::cin >> S1 >> S2;
	if (S1 * 2 < S2) { C = 'H'; }
	std::cout << C;
	return 0;
}