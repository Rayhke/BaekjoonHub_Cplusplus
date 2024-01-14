#include <iostream>

int main() {
	int A, B, C; std::cin >> A >> B >> C;
	B /= A; C *= B * 3;
	std::cout << C;
	return 0;
}