#include <iostream>

int main() {
	char S[501], Value; int N; std::cin >> N >> S;
	for (int n = 0; n < N; n++) {
		if (S[n] == 73) { Value = S[n] + 32; }
		else { Value = S[n] - 32; }
		std::cout << Value;
	}
	return 0;
}