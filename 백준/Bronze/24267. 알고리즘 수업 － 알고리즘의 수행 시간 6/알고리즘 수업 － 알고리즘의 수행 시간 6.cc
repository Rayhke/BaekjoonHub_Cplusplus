#include <iostream>

int main() {
	long long N, Count = 0; std::cin >> N; N--;
	for (int n = 0; n < N - 1; n++) {
		Count += (N - n) * (N - (n + 1LL));
	}
	std::cout << Count / 2 << '\n' << 3;
	return 0;
}