#include <iostream>
using namespace std;

int main() {
	double x, y, n = 1;
	string a;
	while (n) {
		cin >> x >> y;
		if (x == 0 || y == 0) a += "AXIS";
		else if (x > 0 && y > 0) a += "Q1";
		else if (x < 0 && y > 0) a += "Q2";
		else if (x < 0 && y < 0) a += "Q3";
		else if (x > 0 && y < 0) a += "Q4";
		if (x == 0 && y == 0) { n = 0; }
		else if (n > 0) { a += "\n"; }
	}
	cout << a;
	return 0;
}