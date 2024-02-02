#include <iostream>
using namespace std;

int main() {
	int N[3];
	for (int n = 0; n < 3; n++) { cin >> N[n]; }
	for (int n = 0; n < 2; n++) {
		int P = n;
		for (int m = n + 1; m < 3; m++) {
			if (N[P] > N[m]) { P = m; }
		}
		swap(N[n], N[P]);
	}
	cout << N[1];
	return 0;
}