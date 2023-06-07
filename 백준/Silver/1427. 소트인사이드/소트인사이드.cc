#include <iostream>
using namespace std;

int main() {
	int a[10] = {}; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		a[s[n] - 48]++;
	}
	for (int n = 9; n > -1; n--) {
		for (int m = 0; m < a[n]; m++) {
			cout << n;
		}
	}
	return 0;
}