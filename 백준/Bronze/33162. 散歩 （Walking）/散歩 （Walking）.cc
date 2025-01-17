#include <iostream>

int main() {
	int X; std::cin >> X;
	std::cout << X / 2 + (X & 1 ? 3 : 0);
	return 0;
}