#include <iostream>
using namespace std;

int main() {
	int a[42] = { 0 }, b, c = 0;
	for (int n = 0; n < 10; n++) {
		cin >> b; b = b % 42;
		if (b != 0) { if (a[b] != 0) { continue; } else { a[b] = b; } }
		else { if (a[0] != 0) { continue; } else { a[0] = 1; } }
	}
	for (int n = 0; n < 42; n++) {
		if (a[n] == 0) { continue; }
		else { c++; }
	}
	cout << c << endl;
	return 0;
}
/* ■ 설명 ■
10개의 값을 입력하고, 입력 받은 값을 각각 42로 나누어서
나머지 값이 나오는 갯수를 구하되, 중복은 카운트 하지 않는다.

나머지가 나올 수 있는 경우의 수는 (0 ~ 41) 이고,
즉, 42개 (나머지가 없는 경우도 포함)
나머지 값을 배열의 자릿값이자, 배열 자리에 담긴 값으로 활용하여,
중복을 걸러냄

또한, 나머지 값이 중복으로 자주 나올 가능성을 고려해서
메모리를 아끼고자, 이미 담겨 있는 나머지 값이 나와서
이미 담긴 값을 다시 담아내는 중복 작업을 생략하고자
[continue] 를 사용

최종적으로 마지막에 배열 a 중에서 값이 담겨 있는 자리가
몇 개인지 체크 후, 체크한 갯수 값을 출력
*/
