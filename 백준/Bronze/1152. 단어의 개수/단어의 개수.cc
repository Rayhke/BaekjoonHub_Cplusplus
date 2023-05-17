#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0; string s;
	getline(cin, s);
	if (s[0] != ' ') { a++; }		// 이렇게 설계한 이유는 - ◆ 해설 1 ◆ 참고
	for (int n = 0; s[n] != '\0'; n++) {
		if ((s[n] == ' ') && (s[n + 1] != '\0')) { a++; }
	}
	cout << a;
	return 0;
}
/* ■ 설명 ■
백준 11718번 문제 참고

EOF(End of File) 인 [getline(cin, s)] 를 이용하여,
[string s] 에 입력 되는 모든 문자열 입력을 받아와서
띄어 쓰기 다음에 낱말이 이어지면, 그때 카운트 '+1' 하는 것.

◆ 해설 1 ◆
[if ((s[n] == ' ') && (s[n + 1] != '\0')) { a++; }] 조건에 의해서,
입력 받은 문장 첫 단어가 띄어 쓰기가 들어간 것과 아닌 것과 결과가 차이가 있기 때문
*/
