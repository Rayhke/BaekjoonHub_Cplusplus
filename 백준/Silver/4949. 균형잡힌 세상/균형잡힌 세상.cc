#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <char> s;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	string p;
	do {
		getline(cin, p);
		if (p != ".") {
			for (int n = 0; n < size(p); n++) {
				if (p[n] == '(' || p[n] == '[') {
					s.push(p[n]);
				}
				else if (p[n] == ')' || p[n] == ']') {
					if (!s.empty()) {
						if (s.top() == '(' && p[n] == ')') { s.pop(); }
						else if (s.top() == '[' && p[n] == ']') { s.pop(); }
						else { break; }
					}
					else { s.push(p[n]); break; }
				}
			}
			if (s.empty()) { cout << "yes\n"; }
			else { cout << "no\n"; while (!s.empty()) { s.pop(); } }
		}
		else { break; }
	} while (1);
	return 0;
}
/* ■ 설명 ■
================
[오답 원인]
첫 입력이
] 나 ) 등이 왔을 때, 특별히 s.push() 작업을 하지 않아서, s.empty() 기준으로 stack이 텅텅 비었기에 ' 1 ' 이 출력 되어 원랜
' no ' 가 ' yes ' 로 출력 되는 참사랑

문자 하나만 입력 하였을 때 ( [ ] ) 등등 , do while 반복문이 종료 되었기에 조건문 수정
*/
