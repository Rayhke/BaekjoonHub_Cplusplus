#include <iostream>
using namespace std;

int main() {
	int n;
	string a, b;
	cin >> n;
	while (n--) {
		cin >> a;
		b += a[0];
		b += a[a.length() - 1];
		b += "\n";
		a = { 0 };
	}
	cout << b;
	return 0;
}