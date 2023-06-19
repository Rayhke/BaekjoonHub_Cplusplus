#include <iostream>
using namespace std;

int main() {
	int C, T; cin >> T;
	int** p = new int* [T] {};
	for (int n = 0; n < T; n++) { p[n] = new int[4]{}; }
	for (int n = 0; n < T; n++) {
		cin >> C;
		while (1) {
			if (C >= 25) { p[n][0] = C / 25; C = C % 25; }
			else if (C >= 10) { p[n][1] = C / 10; C = C % 10; }
			else if (C >= 5) { p[n][2] = C / 5; C = C % 5; }
			else { p[n][3] = C; break; }
		}
	}
	for (int n = 0; n < T; n++) {
		for (int m = 0; m < 4; m++) {
			cout << p[n][m] << " ";
		}
		cout << '\n';
	}
	for (int n = 0; n < T; n++) { delete[]p[n]; }
	delete[]p;
	return 0;
}
