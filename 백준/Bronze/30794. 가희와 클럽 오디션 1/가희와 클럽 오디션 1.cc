#include <iostream>

int main() {
	char S[8]; int N; std::cin >> N >> S;
	switch (S[0]) {
	case 'm': N *= 0; break;
	case 'b': N *= 200; break;
	case 'c': N *= 400; break;
	case 'g': N *= 600; break;
	default: N *= 1000;
	}
	std::cout << N;
	return 0;
}