#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(10);
	cout << a + b - sqrt(pow(a, 2) + pow(b, 2));
	return 0;
}