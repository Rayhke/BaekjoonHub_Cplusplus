#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}
/* ■ 설명 ■
[return 0;] 란 무엇인가? 코드를 실행하면서 만들어진 메모리 주소 값들을
작업이 끝나면 할당된 값들을 쓸 용도를 다 했으니,
할당한 메모리 주소 값들을 0으로 한번 초기화 시켜주는 작업
이것을 하지 않으면 우리는 프로그램 실행이 끝났다 생각해도
실제론 계속 메모리 공간을 차지하고 있기 때문에
추후 프로그램을 계속 반복 실행 시에 (나중에 이어서 수정)
*/
/*==================================================================*/
/* ■ C언어 ■ */
	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	  int a, b;
	  scanf("%d %d", &a, &b);
	  printf("%d", a + b);
	  return 0;
}

