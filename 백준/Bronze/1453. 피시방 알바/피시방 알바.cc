#include <iostream>

bool V[101];
int N, M, L = 0;

int main() {
	std::cin >> N;
	while (N--) {
		std::cin >> M;
		if (!V[M]) { V[M] = 1; }
		else { L++; }
	}
	std::cout << L;
	return 0;
}