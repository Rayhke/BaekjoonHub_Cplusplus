#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	int N, C, P; std::cin >> N;
	while (N--) {
		std::cin >> C >> P;
		printf("%d %d\n%d\n", C, P, C * P - 2 * (C - 1));
	}
	return 0;
}