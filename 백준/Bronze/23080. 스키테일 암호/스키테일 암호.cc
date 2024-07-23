#include <iostream>

int main() {
	int K, Count = 0; std::string S; std::cin >> K >> S;
	for (int n = 0; n < S.length(); n += K) {
		std::cout << S[n];
	}
	return 0;
}