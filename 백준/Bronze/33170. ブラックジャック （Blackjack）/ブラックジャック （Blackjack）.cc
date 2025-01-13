#include <iostream>

int main() {
	int A, B, C; std::cin >> A >> B >> C;
	std::cout << (A + B + C > 21 ? 0 : 1);
	return 0;
}