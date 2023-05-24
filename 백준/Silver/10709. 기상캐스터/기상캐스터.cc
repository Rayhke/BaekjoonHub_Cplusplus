#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {}, H, W; char c;
	cin >> H >> W;
	for (int n = 0; n < H; n++) { for (int m = 0; m < W; m++) { a[n][m] = -1; } }
	for (int n = 0; n < H; n++) { for (int m = 0; m < W; m++) {
			cin >> c;
			if (c == 'c') { for (int l = m; l < W; l++) { a[n][l] = l - m; } }
		}
	}
	for (int n = 0; n < H; n++) {
        for (int m = 0; m < W; m++) { cout << a[n][m] << " "; }
		cout << "\n";
	}
	return 0;
}