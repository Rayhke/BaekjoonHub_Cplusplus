#include <iostream>
using namespace std;

int main() {
	int a[2001] = {}, b, c;
	cin >> b; a[1000] = 1;
	for (int n = 0; n < b; n++) {
		cin >> c; a[1000 + c] = c;
	}
	for (int n = 0; n < 2001; n++) {
		if (n != 1000 && a[n] != 0) { cout << a[n] << " "; }
		else if (n == 1000 && a[1000] != 1) { cout << a[1000] << " "; }
	}
	return 0;
}
