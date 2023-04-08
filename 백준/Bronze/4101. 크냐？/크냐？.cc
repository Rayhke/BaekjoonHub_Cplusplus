#include <iostream>
using namespace std;

int main() {
	int a, b, c = 1;
	string d;
	while (c) {
		cin >> a >> b;
		if (a != 0 && b != 0) {
			if (a > b) d += "Yes";
			else if (a <= b) d += "No";
			if (c > 0) d += "\n";
		}
		else { c--; }
	}
	cout << d;
	return 0;
}
