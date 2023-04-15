#include <iostream>
#include <string>
using namespace std;

string s(string a, string b) {
	if (a.size() < b.size()) swap(a, b);
	int m = a.size() - 1;
	for (int n = b.size() - 1; n >= 0; n--, m--) a[m] += (b[n] - '0');
	for (int n = a.size() - 1; n > 0; n--) {
		if (a[n] > '9') {
			int c = a[n] - '0';
			a[n - 1] = ((a[n - 1] - '0') + c / 10) + '0';
			a[n] = (c % 10) + '0';
		}
	}
	if (a[0] > '9') {
		string d;
		d += a[0];
		a[0] = ((a[0] - '0') % 10) + '0';
		d[0] = ((d[0] - '0') / 10) + '0';
		a = d + a;
	}
	return a;
}

int main() {
	string a, b;
	cin >> a >> b;
	cout << s(a, b);
	return 0;
}