#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int D, H, W; double P; cin >> D >> H >> W;
	P = D / sqrt(pow(H, 2) + pow(W, 2));
	H *= P; W *= P;
	cout << H << ' ' << W;
	return 0;
}