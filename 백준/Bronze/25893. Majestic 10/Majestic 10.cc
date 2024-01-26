#include <iostream>
using namespace std;

int main() {
	int N, M[3], P = 0; cin >> N;
	while (N--) {
		for (int n = 0; n < 3; n++) { cin >> M[n]; }
		for (int n = 0; n < 3; n++) {
			if (M[n] > 9) { P++; }
			cout << M[n] << ' ';
		}
		if (P == 0) { cout << "\nzilch\n\n"; }
		else if (P == 1) { cout << "\ndouble\n\n"; }
		else if (P == 2) { cout << "\ndouble-double\n\n"; }
		else if (P == 3) { cout << "\ntriple-double\n\n"; }
		P = 0;
	}
	return 0;
}