#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	d = c - b;
	if (d > 0) { cout << ((a / d) + 1); }
	else { cout << -1; }
	return 0;
}