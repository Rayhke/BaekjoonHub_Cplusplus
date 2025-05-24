#include <iostream>
using namespace std;

int main() {
	double C4, A3, A4; cin >> C4 >> A3 >> A4;
	C4 *= 2 * 0.229 * 0.324;
	A3 *= 2 * 0.297 * 0.420;
	A4 *= 0.210 * 0.297;
	printf("%0.6f", C4 + A3 + A4);
	return 0;
}