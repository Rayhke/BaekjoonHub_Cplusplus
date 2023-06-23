#include <iostream>
using namespace std;

int main() {
	int a, b, c = 2000, d = 2000;
	for (int n = 0; n < 3; n++) { cin >> a; c = (a < c) ? a : c; }
	for (int n = 0; n < 2; n++) { cin >> b; d = (b < d) ? b : d; }
	cout << c + d - 50;
	return 0;
}