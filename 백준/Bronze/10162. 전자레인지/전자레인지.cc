#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0, t;
	cin >> t;
	while (1) {
		if (t >= 300) { a = t / 300; t %= 300; if (t == 0) { break; } }
		else if (t >= 60) { b = t / 60; t %= 60; if (t == 0) { break; } }
		else if (t >= 10) { c = t / 10; t %= 10; if (t == 0) { break; } }
		else if (t < 10) { t = -1; break; }
	}
	if (t != -1) { cout << a << " " << b << " " << c; }
	else { cout << t; }
	return 0;
}