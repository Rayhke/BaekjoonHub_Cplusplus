#include <iostream>
using namespace std;

int main() {
	char a[101];
	cin >> a;
	char* b = a;
	for (int n = 0; a[n] != NULL; n++) {
		if ('a' <= *b && *b <= 'z') { *b = *b - 32; }
		else { *b = *b + 32; }
		b++;
	}
	cout << a << endl;
	return 0;
}
/* ■ 설명 ■
a[b] = *b
*/
