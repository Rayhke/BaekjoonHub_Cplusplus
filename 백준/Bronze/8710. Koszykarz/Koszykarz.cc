#include <iostream>
using namespace std;

int main() {
	int k, w, m, n = 0;
	cin >> k >> w >> m;
	while (k < w) {
		k += m;
		n++;
	}
	cout << n;
	return 0;
}
/* ■ 설명 ■
k : 현재 자신의 cm 키
w : 목표하는 cm 키
m : 머리에 혹을 하나 만들면 자라나는 cm 키
n : 혹을 몇번 만들었는 가, 스택
[while] 반복문 조건으로 현재의 키(k)가 목표하는 키(w)가 될 때까지
무한 반복을 하고, 또한 반복할 때 마다 혹(m) 하나의 크기 만큼
현재 키에 더하고 다시 비교 후, 목표하는 키(w)보다 작다면
((k + (m * n)) >= w) 앞의 조건이 참이 될때까지 반복
*/
/*=============================*/
/* ■ C언어 ■ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int k, w, m, n = 0;
	scanf("%d %d %d", &k, &w, &m);
	for (; k < w;) {
		k += m;
		n++;
	}
	printf("%d", n);
	return 0;
}
/* ■ 설명 ■
[for] 반복문도 이러한 형태로 조건이 성립하는 한,
계속 반복 시킬 수 있다.
*/
