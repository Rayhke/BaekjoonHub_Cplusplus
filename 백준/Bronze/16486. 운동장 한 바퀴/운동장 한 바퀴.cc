#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b;
	cout << fixed;
	cout.precision(10);
	c = ((a * 2) + ((b * 2) * 3.141592));
	cout << c;
	return 0;
}