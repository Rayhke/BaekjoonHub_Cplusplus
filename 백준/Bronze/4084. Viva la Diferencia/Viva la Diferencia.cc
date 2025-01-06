#include <iostream>

int main() {
	int A, B, C, D, E, Count;
	while (1) {
		std::cin >> A >> B >> C >> D; Count = 0;
		if (A == 0) { break; }
		while (A != B || B != C || C != D || D != A) {
			E = A;
			A = abs(A - B); B = abs(B - C);
			C = abs(C - D); D = abs(D - E);
			Count++;
		}
		std::cout << Count << '\n';
	}
	return 0;
}