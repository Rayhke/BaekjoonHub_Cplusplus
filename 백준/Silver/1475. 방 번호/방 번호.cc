#include <iostream>
using namespace std;

int main() {
	int a[10] = {}, b, c, d = -1; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) { b = s[n] - '0'; a[b]++; }
	b = a[6] + a[9]; c = (b / 2) + (b % 2);
	for (int n = 0; n < 10; n++) {
		if (n == 6 || n == 9 || d >= a[n]) { continue; }
		else if (d < a[n]) { d = a[n]; }
	}
	if (c < d) { cout << d; }
	else { cout << c; }
	return 0;
}
/* ■ 설명 ■


*/
