#include <iostream>
using namespace std;

int C1, C2, C3;

int main() {
	bool R1, R2; int N, A, B; cin >> N >> A >> B;
	for (int n = 1; n <= N; n++) {
		R1 = n % A == 0;
		R2 = n % B == 0;
		if (R1 && R2) { C3++; continue; }
		R1 ? C1++ : C1;
		R2 ? C2++ : C2;
	}
	printf("%d %d %d", C1, C2, C3);
	return 0;
}