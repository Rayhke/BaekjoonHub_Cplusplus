#include <iostream>
using namespace std;

int main() {
	int a, b, c[5], s, n = 0;
	cin >> a >> b;
	s = a * b;
	for (;;) {
		cin >> c[n]; n++;
		if (n == 5) break;
	} 
	for (n = 0; n < 5; n++) {
		cout << (c[n] - s) << " ";
	}
	return 0;
}