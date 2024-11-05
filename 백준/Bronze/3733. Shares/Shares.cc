#include <iostream>

int main() {
	int N, S;
	while (std::cin >> N >> S) {
		printf("%d\n", S / ++N);
	}
	return 0;
}