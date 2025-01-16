#include <iostream>

int main() {
	int P, Q, A, B; std::cin >> P >> Q >> A >> B;
	if (P > Q) { std::cout << (Q * A); }
	else { std::cout << (P * A) + ((Q - P) * B); }
	return 0;
}