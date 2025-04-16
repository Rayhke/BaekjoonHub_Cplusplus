#include <iostream>

int main() {
	int N = 1; char S[51]; std::cin >> S;
	for (char& C : S) {
		if (C == 0) { break; }
		if (--N) { continue; }
		std::cout << C; N = C - 64;
	}
	return 0;
}