#include <iostream>
#include <string>		// [to_string] 를 사용하기 위한 헤더 파일 - < 설명 1 >
using namespace std;

int s(int b) {
	int c; string s = to_string(b);			  // [int] 형을 [string] 형 문자열로 변환
	for (int n = 0; s[n] != '\0'; n++) {
		c = s[n] - 48;						          // [string] 에 담긴 숫자인 아스키 코드 값 이용
		if (c != 0) { b = b + c; }
	}
	return b;
}

int main() {
	int a, b = 0, c = 0;
	cin >> a;
	while (a > b) {                       // [while] 반복문에 종료 조건을 직접 넣어서, 처음 작성한 코드 보단
    b = b + 1;                          // 간결해졌지만, 연산에 걸린 시간이 8 ms 증가 했다.
    if (a == s(b)) { c = 1; break; }
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
