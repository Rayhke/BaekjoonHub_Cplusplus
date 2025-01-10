#include <iostream>

int Point[26];

int main() {
	int P1 = 0, P2 = 0; char S[9];
	Point[15] = 1; Point[13] = 3; Point[1] = 3;
	Point[17] = 5; Point[16] = 9;
	for (int n = 0; n < 8; n++) {
		std::cin >> S;
		for (int n = 0; n < 8; n++) {
			if (S[n] == '.') { continue; }
			S[n] < 91 ? P1 += Point[S[n] - 65] : P2 += Point[S[n] - 97];
		}
	}
	std::cout << P1 - P2;
	return 0;
}