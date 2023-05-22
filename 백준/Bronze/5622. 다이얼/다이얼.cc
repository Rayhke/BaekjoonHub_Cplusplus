#include <iostream>
using namespace std;

int main() {
	int a, b = 0; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		a = s[n]; a = a - 64;						// 이렇게 설계한 이유는 - ◆ 해설 1 ◆ 참고
		if ('A' <= s[n] && s[n] <= 'Z') {
			if (0 < a && a < 4) { b += 3; }
			else if (3 < a && a < 7) { b += 4; }
			else if (6 < a && a < 10) { b += 5; }
			else if (9 < a && a < 13) { b += 6; }
			else if (12 < a && a < 16) { b += 7; }
			else if (15 < a && a < 20) { b += 8; }
			else if (19 < a && a < 23) { b += 9; }
			else { b += 10; }
		}
	}
	cout << b;
	return 0;
}
/* ■ 설명 ■
다이얼 넘버로 알파벳을 입력 받았을 때,
각 알파벳에 따라서

A B C : 3초
D E F : 4초
G H I : 5초
J K L : 6초
M N O : 7초
P Q R S : 8초
T U V : 9초
W X Y Z : 10초

의 입력 시간이 걸린다.

◆ 해설 1 ◆
보기 편하도록 [A : 1 ~ Z : 25] 까지 나타내기 위한
연산이 추가 되었기 때문에 처음 풀은 방식과 다르게
조금 더 시간이 걸리지 않을 까 한다.
*/
