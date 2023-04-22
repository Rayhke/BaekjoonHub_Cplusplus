#include <iostream>
#include <ctime>
using namespace std;

int s(int a, int b, int c, int d) {
	int e = (a == b && a == c && a == d && b == c && b == d && c == d) ? 1 : 0;
	if (e > 0) { e = 50000 + (a * 5000); }
	else {
		if (a == b && a == c && b == c) { e = 10000 + (a * 1000); }
		else if (a == b && a == d && b == d) { e = 10000 + (a * 1000); }
		else if (a == c && a == d && c == d) { e = 10000 + (a * 1000); }
		else if (b == c && b == d && c == d) { e = 10000 + (b * 1000); }
		else {
			if (a == b && c == d) { e = 2000 + (a * 500) + (c * 500); }
			else if (a == c && b == d) { e = 2000 + (a * 500) + (b * 500); }
			else if (a == d && b == c) { e = 2000 + (a * 500) + (b * 500); }
			else {
				if (a == b || a == c || a == d) { e = 1000 + (a * 100); }
				else if (b == c || b == d) { e = 1000 + (b * 100); }
				else if (c == d) { e = 1000 + (c * 100); }
				else {
					if (a > b && a > c && a > d) { e = (a * 100); }
					else if (b > a && b > c && b > d) { e = (b * 100); }
					else if (c > a && c > b && c > d) { e = (c * 100); }
					else if (d > a && d > b && d > c) { e = (d * 100); }
				}
			}
		}
	}
	return e;
}

int main(int argc, char* argv[]) {
	int a, b, c, d, e = 0, n;
	cin >> n;
	for (int m = 0; m < n; m++) {
		cin >> a >> b >> c >> d;
		e = (e > s(a, b, c, d)) ? e : s(a, b, c, d);
	}
	cout << e;
	return 0;
}