#include <iostream>
using namespace std;

bool P[101];

int main() {
	int N; cin >> N;
	for (int n = 1; n < 10; n++) {
		for (int m = 1; m < 10; m++) { P[n * m] = 1; }
	}
	cout << P[N];
	return 0;
}