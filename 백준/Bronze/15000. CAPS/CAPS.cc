#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	// 메모리 사용량과 시간을 단축하기 위해 사용
	string s; cin >> s;							// [4916KB -> 3680KB], [40ms -> 8ms]
	for (int n = 0; s[n] != '\0'; n++) { s[n] = s[n] - 32; }
	cout << s;
	return 0;
}
/* ■ 설명 ■
입력 받은 문자열(영문 소문자)을
아스키 코드 값으로 ' -32 ' 를 하여,
영문 대문자로 출력하도록 한다.
*/
