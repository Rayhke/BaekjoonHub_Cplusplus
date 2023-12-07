#include <iostream>

int main() {
	int T, P; std::string A, B; std::cin >> T;
	while (T--) {
		std::cin >> A >> B; P = 0;
		for (int n = 0; n < A.length(); n++) {
			if (A[n] != B[n]) { P++; }
		}
		std::cout << "Hamming distance is " << P << ".\n";
	}
	return 0;
}