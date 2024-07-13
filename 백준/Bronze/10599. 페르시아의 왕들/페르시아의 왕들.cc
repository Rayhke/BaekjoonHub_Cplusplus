#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;
	while (1) {
		cin >> A >> B >> C >> D;
		if (A == 0 && B == 0 && C == 0 && D == 0) { break; }
		printf("%d %d\n", C - B, D - A);
	}
	return 0;
}