#include <iostream>
#include <cmath>
using namespace std;

inline float s(int a, int b, int c) {
	if (a == -1) { return sqrt(pow(c, 2) - pow(b, 2)); }
	else if (b == -1) { return sqrt(pow(c, 2) - pow(a, 2)); }
	else { return sqrt(pow(a, 2) + pow(b, 2)); }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d = 1; float e;
	do {
		cout << fixed;
		cout.precision(3);
		cin >> a >> b >> c;
		if (a + b + c != 0) {
			cout << "Triangle #" << d << '\n';
			e = s(a, b, c);
			if (e > 0) {
				if (a == -1) { cout << "a = "; }
				else if (b == -1) { cout << "b = "; }
				else { cout << "c = "; }
				cout << e << "\n\n";
			}
			else {
				cout << "Impossible.\n\n";
			}
		}
		d++;
	} while (a + b + c != 0);
	return 0;
}