#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a[3] = {};
	for (int n = 0; n < 3; n++) { cin >> a[n]; }
	sort(a, a + 3);
	if (a[0] == a[1] && a[0] == a[2] && a[1] == a[2]) { cout << 2; return 0; }
	else {
		if (pow(a[2], 2) == pow(a[1], 2) + pow(a[0], 2)) { cout << 1; }
		else { cout << 0; }
	}
	return 0;
}