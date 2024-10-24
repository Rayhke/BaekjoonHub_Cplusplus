#include <iostream>

int main() {
	int N, In; std::cin >> N;
	while (N--) {
		std::cin >> In;
		printf("%d is %s\n", In, ((In & 1) ? "odd" : "even"));
	}
	return 0;
}