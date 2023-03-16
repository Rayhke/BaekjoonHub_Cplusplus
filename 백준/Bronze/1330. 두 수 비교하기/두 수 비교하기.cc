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
조건문 [if() {}] 는 'if(조건문)' 안에 들어간 조건이 성립되는
'if(조건문=True(1))' 이라면, 'if(1) {실행문}' 블록 안의 실행문을 실행할 것이고, 반대로 조건이 성립되지 않는 경우
'if(조건문=False(0))' 이라면, 'if(0) {실행문}' 블록 안의 실행문을 실행하지 않는다.
추가로, 조건문 [if() {}] 뒤에 [else if() {}] 조건문을 붙인다면,
'if'문 조건이 성립되지 않아서 넘겼을 때, 조건 검증 바톤을 이어서
'else if(조건문) {실행문}' 의 조건이 성립된다면, 'else if(1) {실행문}' 블록 안의 실행문을 실행할 것이다.
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
