#include <iostream>
using namespace std;

int main() {
	int a, b = 0, c = 0;
	for (int n = 0; n < 4; n++) { cin >> a; b += a; }
	for (int n = 0; n < 4; n++) { cin >> a; c += a; }
	if (b > c) { cout << b; }
	else { cout << c; }
	return 0;
}