#include <iostream>
using namespace std;

int main() {
	int a[10000] = {}, b, c = 1, H, W, T;
	cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> H >> W >> T;
		for (int m = 1; m <= W; m++) {
			for (int l = 1; l <= H; l++) {
				if (c == T) { a[n] = ((l * 100) + m); break; }
				c++;
			}
			if (a[n] != 0) { c = 1; break; }
		}
	}
	for (int n = 0; n < b; n++) { cout << a[n] << "\n"; }
	return 0;
}