#include <iostream>

int main() {
	int L, N; char C; std::cin >> L;
	while (L--) {
		std::cin >> N >> C;
		while (N--) { std::cout << C; }
		std::cout << '\n';
	}
	return 0;
}