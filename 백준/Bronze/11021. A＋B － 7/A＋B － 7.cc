#include <iostream>
using namespace std;

int main() {
	int a, b, t;
	int c[100000];
	cin >> t;
	for (int n = 0; n < t; n++) {
		cin >> a >> b;
		c[n] = a + b;
	}
	for (int m = 0; m < t;) {
		cout << "Case #" << m + 1 << ": " << c[m];
		m++;
		if (m < t) {
			cout << "\n";
		}
	}
	return 0;
}
/*===========================================================*/
/* ■ C 언어 ■ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, t;
	int c[100000] = { 0 };
	scanf("%d", &t);
	for (int n = 0; n < t; n++) {
		scanf("%d %d", &a, &b);
		c[n] = a + b;
	}
	for (int m = 0; m < t;) {
		printf("Case #%d: %d", m + 1, c[m]);
		m++;
		if (m < t) {
			printf("\n");
		}
	}
	return 0;
}
