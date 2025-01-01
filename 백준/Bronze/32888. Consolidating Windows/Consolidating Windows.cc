#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long double A, B; cin >> A >> B;
	printf("%0.9Lf", sqrtl(powl(A, 2) + powl(B, 2)));
	return 0;
}