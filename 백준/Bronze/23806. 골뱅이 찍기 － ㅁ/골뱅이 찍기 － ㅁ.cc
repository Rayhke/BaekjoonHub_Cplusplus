#include <iostream>
using namespace std;

int N;

void S() {
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N * 5; m++) { printf("@"); }
		printf("\n");
	}
}

void E() {
	for (int n = 0; n < N * 3; n++) {
		for (int m = 0; m < N; m++) { printf("@"); }
		for (int m = 0; m < N * 3; m++) { printf(" "); }
		for (int m = 0; m < N; m++) { printf("@"); }
		printf("\n");
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N; S(); E(); S();
	return 0;
}