#include <iostream>

int main() {
	int N, A = 1, B = 1, Max = 2; std::cin >> N;
	while (--N) {
		if (B + 1 == Max) { Max++; A = Max - 1; B = 1; }
		else { A--; B++; }
	}
	printf("%d %d", A, B);
	return 0;
}