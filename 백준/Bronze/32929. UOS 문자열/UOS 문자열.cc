#include <iostream>

int main() {
	char S[] = { 'U','O','S' }; int X;
	std::cin >> X; X--;
	std::cout << S[X % 3];
	return 0;
}