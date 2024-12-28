#include <iostream>
using namespace std;

short R1[26], R2[10];

int main() {
	char C, S[7]; cin >> S;
	for (int n = 0; n < 3; n++) { R1[S[n] - 65]++; }
	for (int n = 3; n < 6; n++) { R2[S[n] - 48]++; }
	for (int n = 0; n < 26; n++) {
		while (R1[n]--) {
			C = n + 65;
			cout << C;
			for (int n = 9; n > -1; n--) {
				if (R2[n] > 0) {
					R2[n]--;
					cout << n;
					break;
				}
			}
		}
	}
	return 0;
}