#include <iostream>

int main() {
	int N = 0; char S[6];
	for (int n = 0; n < 9; n++) {
		std::cin >> S;
		S[0] == 'L' ? N++ : N;
	}
	std::cout << (N > 4 ? "Lion" : "Tiger");
	return 0;
}