#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b;
		if (b != 1 && b % 2 != 0 && b % 3 != 0 && b % 5 != 0 && b % 7 != 0 && b % 11 != 0 &&
			b % 13 != 0 && b % 17 != 0 && b % 19 != 0 && b % 23 != 0 && b % 29 != 0 && b % 31 != 0 ||
			b == 2 || b == 3 || b == 5 || b == 7 || b == 11 || b == 13 || b == 17 || b == 19 || b == 23 || b == 29 || b == 31) {
			c++;
		}
	}
	cout << c;
	return 0;
}