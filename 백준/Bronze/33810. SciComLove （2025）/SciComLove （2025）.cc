#include <iostream>

int main() {
	int Sum = 0; char S[11] = "SciComLove", P[11]; std::cin >> P;
	for (int n = 0; n < 10; n++) {
		S[n] != P[n] ? Sum++ : Sum;
	}
	std::cout << Sum;
	return 0;
}