#include <iostream>
#include <cmath>
using namespace std;

void s(int a, char b, char c, char d) {
	if (a < 1) { return; }
	else {
		s(a - 1, b, d, c);
		cout << b << ' ' << c << '\n';
		s(a - 1, d, c, b);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
	int a; cin >> a;
	cout << (int)pow(2, a) - 1 << '\n';
	s(a, '1', '3', '2');
	return 0;
}