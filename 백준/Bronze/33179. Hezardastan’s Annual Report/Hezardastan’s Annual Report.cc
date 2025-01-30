#include <iostream>

int main() {
	int N, In, Sum = 0; std::cin >> N;
	while (N--) {
		std::cin >> In;
		Sum += In / 2 + In % 2;
	}
	std::cout << Sum;
	return 0;
}