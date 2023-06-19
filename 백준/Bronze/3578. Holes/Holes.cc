#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	if (a == 0) { cout << 1; }
	else if (a == 1) { cout << 0; }
	else {
		if (a & 1) { cout << '4'; }
		for (int n = 0; n < (a / 2); n++) { cout << '8'; }
	}
	return 0;
}