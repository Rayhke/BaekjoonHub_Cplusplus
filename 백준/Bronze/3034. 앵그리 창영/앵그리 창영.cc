#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[50] = {}, b, N, W, H;
	float S;
	cin >> N >> W >> H;
	S = pow(W, 2) + pow(H, 2); S = sqrt(S);
	for (int n = 0; n < N; n++) {
		cin >> b;
		if (b <= S) { a[n] = 1; }
	}
	for (int n = 0; n < N; n++) {
		if (a[n] == 1) { cout << "DA\n"; }
		else { cout << "NE\n"; }
	}
	return 0;
}