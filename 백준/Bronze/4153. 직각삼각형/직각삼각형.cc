#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	string e;
	while (1) {
		cin >> a >> b >> c;
		if ((a + b + c) == 0) { break; }
		if (pow(a, 2) + pow(b, 2) == pow(c, 2)) { e += '1'; }
		else if (pow(a, 2) + pow(c, 2) == pow(b, 2)) { e += '1'; }
		else if (pow(b, 2) + pow(c, 2) == pow(a, 2)) { e += '1'; }
		else { e += '0'; }
	}
	for (int n = 0; e[n] != NULL; n++) {
		if (e[n] == '1') { cout << "right" << endl; }
		else { cout << "wrong" << endl; }
	}
	return 0;
}