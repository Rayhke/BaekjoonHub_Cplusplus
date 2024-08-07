#include <iostream>
using namespace std;

int main() {
	int T, Result, Arr[2][3]; cin >> T;
	while (T--) {
		Result = 0;
		for (int n = 0; n < 2; n++) {
			for (int m = 0; m < 3; m++) { cin >> Arr[n][m]; }
		}
		for (int n = 0; n < 2; n++) {
			Result += abs(Arr[0][n] - Arr[1][n]);
			Result += Arr[n][2];
		}
		cout << Result << '\n';
	}
	return 0;
}