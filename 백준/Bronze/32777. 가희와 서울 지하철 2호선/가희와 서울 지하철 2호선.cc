#include <iostream>

int main() {
	int Q, A, B, Right, Left; std::cin >> Q;
	while (Q--) {
		std::cin >> A >> B;
		if (A < B) { Right = 43 - B + A; Left = B - A; }
		else { Right = A - B; Left = 43 - A + B; }
		std::cout << (Right == Left ? "Same" : Right > Left ? "Inner" : "Outer")
			<< " circle line\n";
	}
	return 0;
}