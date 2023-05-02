#include <iostream>
using namespace std;

int main() {
	int a, b, n = 0, m = 0;
	for (int l = 0; l < 4; l++) {
		cin >> a >> b;
		n += (b - a);
		if (n > 10000) { n = 10000; }
		m = (n > m) ? n : m;
	}
	cout << m << endl;
	return 0;
}