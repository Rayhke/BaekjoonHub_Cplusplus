#include <iostream>
using namespace std;

int P[2];

int main() {
	int H, B;
	for (int n = 0; n < 2; n++) {
		cin >> H >> B;
		P[n] += H * 3 + B;
	}
	if (P[0] == P[1]) {
		printf("NO SCORE");
	}
	else {
		printf("%d %d", P[0] > P[1] ? 1 : 2, abs(P[0] - P[1]));
	}
	return 0;
}