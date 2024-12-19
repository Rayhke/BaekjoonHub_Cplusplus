#include <iostream>

int main() {
	bool R = 1; int N[4];
	for (int& n : N) { std::cin >> n; }
	if (N[0] < 8 || 9 < N[0] || N[3] < 8 || 9 < N[3]) R = 0;
	if (N[1] != N[2]) R = 0;
	std::cout << (R ? "ignore" : "answer");
	return 0;
}