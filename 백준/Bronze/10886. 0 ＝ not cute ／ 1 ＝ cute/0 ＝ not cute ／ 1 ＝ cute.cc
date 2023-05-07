#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b;
		if (b == 1) { c++; }
		else { d++; }
	}
	if (c > d) { cout << "Junhee is cute!" << endl; }
	else { cout << "Junhee is not cute!" << endl; }
	return 0;
}