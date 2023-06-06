#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[10000] = {}, b; string s;
	for (int n = 1; n < 10000; n++) {
		b = n; s = to_string(n);
		for (int m = 0; s[m] != '\0'; m++) { b = b + (s[m] - '0'); }
		if (a[b - 1] == 0 && b - 1 < 10000) { a[b - 1] = b; }		// b - 1 < 10000 은 배열 자릿값을 초과 하는 것을 방지
	}
	for (int n = 0; n < 10000; n++) {
		if (a[n] == 0) { cout << n + 1 << '\n'; }
	}
	return 0;
}
