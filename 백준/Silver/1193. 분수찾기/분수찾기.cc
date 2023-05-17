#include<iostream>
using namespace std;
int main() {
	int a, b = 1, c = 1, d = 2, e = 1, f = 0, g = 0;
	cin >> a;
	while (1) {
		if (b >= a) { break; }
		b += d; c += d - 1; d++; e++;
	}
	if (e % 2 == 0) {
		for (int n = 0; n <= (a - c); n++) { f++; g = ((d - n) - 1); }
	}
	else if (e % 2 != 0) {
		for (int n = 0; n <= (a - c); n++) { f = ((d - n) - 1); g++; }
	}
	cout << f << "/" << g;
	return 0;
}