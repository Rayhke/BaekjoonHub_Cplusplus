#include <iostream>

int main() {
	int N = 1; std::string S; std::cin >> S;
	for (char& C : S) {
		if (--N) { continue; }
		std::cout << C; N = C - 64;
	}
	return 0;
}