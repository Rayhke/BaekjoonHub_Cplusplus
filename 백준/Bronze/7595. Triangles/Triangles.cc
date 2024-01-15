#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int N;
	while (1) {
		cin >> N;
		if (N == 0) { break; }
		for (int n = 0; n < N; n++) {
			for (int m = -1; m < n; m++) { printf("*"); }
			printf("\n");
		}
	}
	return 0;
}