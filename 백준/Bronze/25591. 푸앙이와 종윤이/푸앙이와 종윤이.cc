#include <iostream>

int main() {
	int A, B, C, D, Q, R; std::cin >> A >> B;
	A = 100 - A; B = 100 - B; C = 100 - (A + B);
	D = A * B; Q = D / 100; R = D % 100;
	printf("%d %d %d %d %d %d\n%d %d", A, B, C, D, Q, R, C + Q, R);
	return 0;
}