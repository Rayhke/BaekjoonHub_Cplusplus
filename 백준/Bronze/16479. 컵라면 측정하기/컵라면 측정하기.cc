#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int K;
	double D1, D2, P, C = 0;
	cin >> K >> D1 >> D2;
	if (D1 != D2) {
		C = pow(((D1 - D2) / 2), 2);
	}
	P = (double)pow(K, 2) - C;
	cout << fixed;
	cout.precision(7);
	cout << P << endl;
	return 0;
}