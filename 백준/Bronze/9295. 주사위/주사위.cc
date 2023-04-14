#include <iostream>
using namespace std;

int main() {
	int T, a, s[100002] = { 0 };
	cin >> T;
	for (int n = 0; n < T; n++) {
		for (int m = 0; m < 2; m++) {
			cin >> a;
			s[n] += a;
		}
	}
	for (int l = 0; l < T; l++) {
		cout << "Case " << l + 1 << ": " << s[l];
		if (l != (T - 1))cout << "\n";
	}
	return 0;
}
