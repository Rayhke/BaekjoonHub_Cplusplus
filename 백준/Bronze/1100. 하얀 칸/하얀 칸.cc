#include <iostream>
using namespace std;

int main() {
	bool r = 1; int p = 0; string s;
	for (int n = 0; n < 8; n++) {
		cin >> s;
		for (int m = 0; m < 8; m++) {
			if (r && s[m] == 'F') { p++; }
			r = !r;
		}
		r = !r;
	}
	cout << p;
	return 0;
}