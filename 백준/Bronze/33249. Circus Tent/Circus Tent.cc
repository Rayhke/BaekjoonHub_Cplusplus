#include <iostream>
#include <cmath>
using namespace std;

const long double PI = acos(-1);

int main() {
	long double D, H; cin >> D >> H;
	D /= 2; D += 5.0;
	cout << fixed; cout.precision(14);
	cout << 2 * PI * D * H + powl(D, 2) * PI;
	return 0;
}