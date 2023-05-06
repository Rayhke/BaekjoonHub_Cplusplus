#include <iostream>
using namespace std;

int main() {
	int a, b;
	double s = 0, m = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b; s += b;
		m = (b > m) ? b : m;
	}
	cout << (s / m / a) * 100;
	return 0;
}
