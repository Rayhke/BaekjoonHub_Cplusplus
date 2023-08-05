#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double A, B; cin >> A >> B;
	A = (B - A) / 400;
	cout << 1 / (1 + pow(10, A));
	return 0;
}