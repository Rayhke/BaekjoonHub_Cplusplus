#include <iostream>
using namespace std;

int main() {
	int a, b = 0; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		a = s[n];
		if ('A' <= s[n] && s[n] <= 'Z') {
			if (64 < a && a < 68) { b += 3; }
			else if (67 < a && a < 71) { b += 4; }
			else if (70 < a && a < 74) { b += 5; }
			else if (73 < a && a < 77) { b += 6; }
			else if (76 < a && a < 80) { b += 7; }
			else if (79 < a && a < 84) { b += 8; }
			else if (83 < a && a < 87) { b += 9; }
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
*/
