#include <iostream>
#include <string>	// [to_string] 를 사용하기 위한 헤더 파일 - < 설명 1 >
using namespace std;

int s(int b) {
	int c; string s = to_string(b);		// [int] 형을 [string] 형 문자열로 변환
	for (int n = 0; s[n] != '\0'; n++) {
		c = s[n] - 48;			// [string] 에 담긴 숫자인 아스키 코드 값 이용
		if (c != 0) { b = b + c; }
	}
	return b;
}

int main() {
	int a, b = 0, c = 0;
	cin >> a;
	while (1) { b = b + 1;
		   if (b == a) { break; }			// 처음 입력 받은 값을 넘어서려고 할 때, 반복 종료
		   else if (a == s(b)) { c = 1; break; }	// 조건이 성립하는 값을 찾았다면, 성공 했다는 입력을 준 후에 반복 종료
	}
	if (c == 1) { cout << b; }
	else { cout << c; }
	return 0;
}
/* ■ 설명 ■
' 216 ' 를 입력 받았을 때,
[196 + 1 + 9 + 6 == 216]
(위치 : 10^2) / (위치 : 10^1) / (위치 : 10^0)

이러한 조건이 성립 하면서 가장 작은 값을 구하되,
만약 조건이 성립 하는 값이 존재하지 않다면,
' 0 ' 을 출력한다.
*/
