#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 1;
	string e;
	while (d) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			d = 0;
		}
		else if (a == b && a == c && b == c) {
			e += "Equilateral";
		}
		else if (a == b || a == c || b == c) {
			d = (a > b) ? a : b;
			d = (d > c) ? d : c;
			if (d == a) {
				if (d < b + c) e += "Isosceles";
				else e += "Invalid";
			} else if (d == b) {
				if (d < a + c) e += "Isosceles";
				else e += "Invalid";
			} else {
				if (d < a + b) e += "Isosceles";
				else e += "Invalid"; }
		}
		else {
			d = (a > b) ? a : b;
			d = (d > c) ? d : c;
			if (d == a) {
				if (d < b + c) e += "Scalene";
				else e += "Invalid";
			} else if (d == b) {
				if (d < a + c) e += "Scalene";
				else e += "Invalid";
			} else {
				if (d < a + b) e += "Scalene";
				else e += "Invalid"; }
		}
		if(d > 0) {
			e += "\n";
		}
	}
	cout << e;
	return 0;
}