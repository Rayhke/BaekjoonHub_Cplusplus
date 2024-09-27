#include <iostream>

int main() {
	int N; std::cin >> N;
	for (int n = 1; ; n++) {
		if (N == 1) { std::cout << n; break; }
		if (N & 1) { N = N * 3 + 1; }
		else { N /= 2; }
	}
	return 0;
}