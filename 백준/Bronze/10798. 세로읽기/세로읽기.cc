#include <iostream>
using namespace std;

int main() {
	int a[5][15] = {};
	char c[1]; string s;
	for (int n = 0; n < 5; n++) {
		cin >> s;
		for (int m = 0; s[m] != '\0'; m++) { a[n][m] = s[m]; }
		s = "";
	}
	for (int n = 0; n < 15; n++) {
		for (int m = 0; m < 5; m++) {
			if (a[m][n] != 0) {
				c[0] = a[m][n];
				cout << c[0];
			}
		}
	}
	return 0;
}
/* ■ 설명 ■
입력 받은 문자열을 세로로 출력하는 것. (세로 읽기)

[int a[5][15]] 형 2차원 배열에 [string s] 문자열 한줄을 열에 담아 넣고,
반복할 때 마다 행을 옮기면서 총 5번 반복한다.

문자를 상수에 담으면 아스키 코드 값으로 저장되고 그것을 다시 문자로 출력 시
원래의 값으로 돌아올 것이다.

그러니 나중에 출력할 때, 행을 먼저 [char c] 로 거쳐서 변환하면서 출력하도록 한다. 


2차원 배열을 이용하여, 문자열을 다양한 방법으로 출력하는 것도
나쁘지 않은 활용법이 될 거 같다.
*/
