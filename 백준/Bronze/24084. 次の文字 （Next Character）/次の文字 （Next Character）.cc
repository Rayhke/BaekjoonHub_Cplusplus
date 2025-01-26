#include <iostream>

int main() {
	int N; char S[101]; std::cin >> N >> S;
	for (int n = 1; n < N; n++) {
		if (S[n] == 74) { printf("%c\n", S[n - 1]); }
	}
	return 0;
}