#include <iostream>

int main() {
	int In, Sum = 0;
	for (int n = 3; n < 6; n++) {
		std::cin >> In;
		Sum += (n * In);
	}
	std::cout << Sum;
	return 0;
}