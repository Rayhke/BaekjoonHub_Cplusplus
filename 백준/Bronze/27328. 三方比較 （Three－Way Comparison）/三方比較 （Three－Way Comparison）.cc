#include <iostream>

int main() {
	int A, B, P; std::cin >> A >> B;
	if (A > B) { P = 1; }
	else if (A == B) { P = 0; }
	else { P = -1; }
	std::cout << P;
	return 0;
}