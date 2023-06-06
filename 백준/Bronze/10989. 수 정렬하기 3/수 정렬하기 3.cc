#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[10000] = {}, b, c;
	cin >> b;
	for (int n = 0; n < b; n++) { cin >> c; a[c - 1] = a[c - 1] + 1; }
	for (int n = 0; n < 10000; n++) {
		if (a[n] == 0) { continue; }
		else {
			b = a[n];
			for (int m = 0; m < b; m++) { cout << n + 1 << '\n'; }
		}
	}
	return 0;
}
