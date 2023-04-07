#include <iostream>
using namespace std;

int main() {
	int a, n = 0;
	cin >> a;
	while (a > 0) {
		a -= 5;
		n++;
	}
	cout << n;
	return 0;
}
/* ■ 설명 ■


*/
/*==============================*/
/* ■ C언어 ■ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, n = 0;
	scanf("%d", &a);
	for (; a > 0;) {
		a -= 5;
		n++;
	}
	printf("%d", n);
	return 0;
}
