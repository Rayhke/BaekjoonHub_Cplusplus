#include <iostream>

int main() {
	int a = 0; char s[102];
	std::cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		if ('a' <= s[n] && s[n] <= 'z') {
			if (s[n] == 'c') {
				if (s[n + 1] == '=' || s[n + 1] == '-') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 'd') {
				if (s[n + 1] == 'z' && s[n + 2] == '=') { a = a + 1; n = n + 2; }
				else if (s[n + 1] == '-') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 'l' || s[n] == 'n') {
				if (s[n + 1] == 'j') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else if (s[n] == 's' || s[n] == 'z') {
				if (s[n + 1] == '=') { a = a + 1; n = n + 1; }
				else { a = a + 1; }
			}
			else { a = a + 1; }
		}
	}
	std::cout << a;
	return 0;
}
/* ■ 설명 ■
std::를 쓴 이유는 namespace 중복 문제로 인해 바꿈
============================================================================
문자열을 입력 받아서
알파벳을 하나 씩 세어 내되,

' c ', ' d ', ' l ', ' n ', ' s ', ' z ' 알파벳은 뒤에 뭐가 오는 지, 확인 후
조건에 해당 한다면, 하나의 알파벳으로 인식하게 끔 한다.

' c ' 인 경우 : ' c= ' / ' c- '
' d ' 인 경우 : ' dz= ' / ' d- '
' l ' 인 경우 : ' lj '
' n ' 인 경우 : ' nj '
' s ' 인 경우 : ' s= '
' z ' 인 경우 : ' z= '
*/
