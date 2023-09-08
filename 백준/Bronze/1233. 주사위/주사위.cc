#include <iostream>
using namespace std;

int main() {
	int v[81] = { 0 }, S1, S2, S3, P = 0; cin >> S1 >> S2 >> S3;
	for (int n = 1; n <= S1; n++) {
		for (int m = 1; m <= S2; m++) {
			for (int l = 1; l <= S3; l++) {
				P = (n + m + l > P) ? n + m + l : P;
				v[n + m + l]++;
			}
		}
	}
	S1 = 0; S2 = 0;
	for (int n = 1; n <= P; n++) {
		if (v[n] > S1) { S1 = v[n]; S2 = n; }
	}
	cout << S2;
	return 0;
}