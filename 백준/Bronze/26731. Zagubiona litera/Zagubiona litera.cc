#include <iostream>

bool Check[26];

int main() {
	char S[26], Value; std::cin >> S;
	for (char& C : S) { Check[C - 65] = 1; }
	for (int n = 0; n < 26; n++) {
		if (Check[n]) { continue; }
		std::cout << (char) (n + 65); break;
	}
	return 0;
}