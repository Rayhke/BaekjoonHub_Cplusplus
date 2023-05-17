#include <iostream>
using namespace std;

int main() {
	int a, b = 0, c = 0; string s;
	cin >> s; a = size(s);
	for (int n = 0; n < (a / 2); n++) { if (s[n] == s[(a - 1) - n]) { b++; } }	// 이렇게 설계한 이유는 - ◆ 해설 1 ◆ 참고
	if (b == (a / 2)) { c = 1; }
	cout << c;
	return 0;
}
/* ■ 설명 ■
팰린드롬 : 앞으로 읽으나, 거꾸로 읽으나 동일한 단어를 뜻 함

◆ 해설 1 ◆
대칭을 기준으로 문자열 길이가 짝수여도 상관 없고,
홀수인 경우에도 가운데 문자는 대칭 검증 대상이 아님.
양쪽 끼리 비교하면 되니까.
*/
