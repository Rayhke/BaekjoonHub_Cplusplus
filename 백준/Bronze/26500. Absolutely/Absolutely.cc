#include <iostream>

int main() {
	int N; double A, B; std::cin >> N;
	while (N--) {
		std::cin >> A >> B;
		if (A != B) {
			printf("%.1f\n", (A > B) ? A - B : B - A);
		}
		else { printf("0.0\n"); }
	}
}