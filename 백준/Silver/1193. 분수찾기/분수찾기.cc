#include<iostream>
using namespace std;
int main() {
	int a, b = 1, c = 1, d = 2, e = 1, f = 0, g = 0;
	cin >> a;
	while (1) {
		if (b >= a) { break; }
		b += d; c += d - 1; d++; e++;
	}
	if (e % 2 == 0) {							// 짝수면 분모 부터 높은 값으로 출발
		for (int n = 0; n <= (a - c); n++) { f++; g = ((d - n) - 1); }
	}
	else if (e % 2 != 0) {							// 홀수면 분자 부터 높은 값으로 출발
		for (int n = 0; n <= (a - c); n++) { f = ((d - n) - 1); g++; }
	}
	cout << f << "/" << g;
	return 0;
}
/* ■ 설명 ■
b : 범위 내 상한선 / c : 범위 내 하한선 / d : 범위 폭 계산용
e : 패턴 반복한 회수 카운트 / f : 분자 / g : 분모

규칙은 간단하다.
팩토리얼 (1 + 2 + 3 + ... + n) 과 피보나치를 합쳐서 떠올려 봐라.
============================================================================================
(정 못 떠올리겠다면 큰 힌트 들어간다. 딱 대라.)

[1번 째]        [2번 째]        [3번 째]        [4번 째]        [5번 째]        [6번 째]
앞              뒤              앞              뒤              앞              뒤

01# : 1/1	02# : 1/2	04# : 3/1	07# : 1/4	11# : 5/1	16# : 1/6
		03# : 2/1	05# : 2/2	08# : 2/3	12# : 4/2	17# : 2/5
				06# : 1/3	09# : 3/2	13# : 3/3	18# : 3/4
						10# : 4/1	14# : 2/4	19# : 4/3
								15# : 1/5	20# : 5/2
										21# : 6/1
*/
