#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0; cin >> a;
	for (int n = 0; n < 5; n++) {
		cin >> b;
		if ((b % 10) == a) { c++; }
	}
	cout << c;
	return 0;
}