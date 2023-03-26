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
그렇다면 조건문 'if'도 'else if'도 모두 성립되지 않을 때,
실행되는 조건문인 'else {실행문}' 블록 안의 실행문을 실행할 것이다.

조건문 (if, else if) 는 여러개 이어 붙여서 쓸 수 있고, 유의점으론
(else if) 문 앞에는 반드시 선행 (if) 문이 붙어 있어야되는 점 말곤 문제 없으나,
(else) 문은 반드시 선행 (if) 문을 시작으로 이어 붙여져 있는 조건문의 마지막 끝맺음에 하나만 붙여둘 것
(else) 문은 모든 조건문이 성립되지 않아 틀어지는 것(변수, 에러, 버그 등)을 상정하여 실행되는 마지노선과도 같다.
*/
/*========================================*/
/* ■ C언어 ■ */

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
