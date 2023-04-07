#include <iostream>
using namespace std;

int main() {
	int a, n = 0;
	cin >> a;
	while (a > 0) {
		a -= 5;
		n++;
	}
	cout << n;
	return 0;
}