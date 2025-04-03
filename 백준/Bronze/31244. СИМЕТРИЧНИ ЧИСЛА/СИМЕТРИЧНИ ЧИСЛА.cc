#include <iostream>
using namespace std;

int main() {
	int A, B, C; cin >> A >> B >> C;
	if (A != B || B != C || A != C) {
		if (A != B && B != C && A != C) {
			printf("%d%d%d%d%d", A, B, C, B, A);
		}
		else if (A == B) {
			printf("%d%d%d%d%d", A, B, C, B, A);
		}
		else if (B == C) {
			printf("%d%d%d%d", A, B, C, A);
		}
		else { printf("%d%d%d", A, B, C); }
	}
	else {
		printf("%d%d%d", A, B, C);
	}
	return 0;
}