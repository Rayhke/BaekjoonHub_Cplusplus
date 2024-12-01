#include <iostream>

int main() {
	int S, F; std::cin >> S >> F;
	std::cout << ((S > F) ? "flight" : "high speed rail");
	return 0;
}