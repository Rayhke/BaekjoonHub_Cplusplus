#include <iostream>

int Min = 0, Max = 0;

void Run(std::string& S) {
	int M1 = 0, M2 = 0, V;
	for (char& C : S) {
		M1 *= 10; M2 *= 10;
		if (C == 53 || C == 54) {
			M1 += 5; M2 += 6; continue;
		}
		V = C - 48;
		M1 += V; M2 += V;
	}
	Min += M1; Max += M2;
}

int main() {
	std::string A, B; std::cin >> A >> B;
	Run(A); Run(B);
	printf("%d %d", Min, Max);
	return 0;
}