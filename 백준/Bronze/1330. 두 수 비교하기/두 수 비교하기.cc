#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {cout << ">";}
	else if (a < b) {cout << "<";}
	else {cout << "==";}
	return 0;
}
/* ■ 설명 ■
조건문 [if()]
*/
/*========================================*/
/* ■ C언어 ■

  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>

  int main() {
  	int a, b;
  	scanf("%d %d", &a, &b);
  	if (a > b) {printf(">");}
  	else if (a < b) {printf("<");}
  	else {printf("==");}
  	return 0;
	}
*/
