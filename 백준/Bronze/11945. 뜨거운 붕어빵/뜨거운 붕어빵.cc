#include <iostream>
using namespace std;

int main() {
	int a, b;
	char c[1]; string s, p;
	cin >> a >> b;
	for (int n = 0; n < a; n++) {
		cin >> s;
		for (int m = 0; m < b / 2; m++) {
			c[0] = s[m];
			s[m] = s[b - m - 1];
			s[b - m - 1] = c[0];
		}
		p += s; p += "\n";
	}
	cout << p;
	return 0;
}
/* ■ 설명 ■

*/
