#include <iostream>

int Sum[2];

int main() {
	std::cin.tie(NULL);
	int N, A, B; std::cin >> N;
	while (N--) {
		std::cin >> A >> B;
		if (A != B) { Sum[A < B] += A + B; }
		else { Sum[0] += A; Sum[1] += B; }
	}
	printf("%d %d", Sum[0], Sum[1]);
}