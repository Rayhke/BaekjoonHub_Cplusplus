#include <iostream>

int main() {
	int S, D, I, L, N; std::cin >> S >> D >> I >> L >> N;
	S = S + D + I + L; N *= 4;
	if (S < N) { std::cout << N - S; }
	else { std::cout << 0; }
	return 0;
}