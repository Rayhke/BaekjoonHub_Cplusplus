#include <iostream>
using namespace std;

int main() {
	int a, b = 0; char d[3] = {};
	for (int n = 0; n < 3; n++) {
		for (int m = 0; m < 4; m++) { cin >> a; b = b + a; }
		if (b != 4) { d[n] = 68 - b; }
		else { d[n] = 69; }
		b = 0;
	}
	for (int n = 0; n < 3; n++) { cout << d[n] << '\n'; }
	return 0;
}