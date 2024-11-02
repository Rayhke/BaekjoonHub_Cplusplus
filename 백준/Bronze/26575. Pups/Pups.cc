#include <iostream>

int main() {
	int N; double D, F, P; std::cin >> N;
	while (N--) {
		std::cin >> D >> F >> P;
		printf("$%0.2f\n", D * F * P);
	}
	return 0;
}