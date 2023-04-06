#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a * b;
	return 0;
}
/* ■ 설명 ■
[직사각형의 넓이 cm² = 직사각형의 가로 (a) × 직사각형의 세로 (b)]
이므로 가로(a)와 세로(b)에 값을 [cin] 입력하여 [cout] 출력시 곱하기.
*/
/*==================================================================*/
/* ■ C언어 ■ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b);
	return 0;
}
