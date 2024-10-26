#include <iostream>

int main() {
	int In, Sum = 0;
	for (int n = 0; n < 6; n++) {
		std::cin >> In; Sum += In * 5;
	}
	std::cout << Sum;
	return 0;
}