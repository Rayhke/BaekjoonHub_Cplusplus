#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	int X, Y, Z; std::cin >> X >> Y;
	for (int x = 0; x <= X; x++) {
		Z = x * 2 + (X - x) * 4;
		if (Z == Y) {
			printf("%d %d", x, X - x);
			break;
		}
	}
	return 0;
}