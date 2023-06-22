#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	float a, b, c = 0, d = 0; string s;
	for (int n = 0; n < 20; n++) {
		cin >> s >> a >> s; b = 0;
		if (s != "F") {
			if (s == "A+") { b = 4.5; }
			else if (s == "A0") { b = 4.0; }
			else if (s == "B+") { b = 3.5; }
			else if (s == "B0") { b = 3.0; }
			else if (s == "C+") { b = 2.5; }
			else if (s == "C0") { b = 2.0; }
			else if (s == "D+") { b = 1.5; }
			else if (s == "D0") { b = 1.0; }
		}
		if (s != "P") { c += a * b; d += a; }
	}
	cout << fixed;
	cout.precision(6);
	cout << c / d;
	return 0;
}