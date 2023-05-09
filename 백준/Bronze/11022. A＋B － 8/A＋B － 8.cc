#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> c;
	for (int n = 1; n <= c; n++) {
		cin >> a >> b;
		cout << "Case #" << n << ": " << a << " + " << b << " = " << (a + b) << endl;
	}
	return 0;
}