#include <iostream>
using namespace std;

int main() {
	string s, p = ""; cin >> s;
	for (int n = 0; n < s.length(); n++) {			// s.size(); 도 가능하긴하다.
		if (s[n] < 65 || 90 < s[n]) { continue; }
		p += s[n];
	}
	cout << p;
	return 0;
}
/* ■ 설명 ■
문자열 변수.length() 를 사용하려면 헤더 <string> 을 선언하는 것이 정석이다.
*/
