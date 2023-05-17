#include <iostream>
using namespace std;

int main() {
	long long a, b, c, d, e = 1;
	cin >> a >> b;
	c = (a > b) ? a : b;
	d = (a < b) ? a : b;
	while (1) { if ((c * e) % d == 0) { break; } e++; }
	cout << c * e;
	return 0;
}