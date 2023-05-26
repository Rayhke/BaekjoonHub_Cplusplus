#include <iostream>
using namespace std;

int main() {
	int a, b = 0;
	char c[21] = "";
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> c;
		while (b < 21) {
			if (c[b] == '\0') { break; }
			b++;
		}
		if (5 < b && b < 10) { cout << "yes\n"; }
		else { cout << "no\n"; }
		b = 0; c[0] = '\0';
	}
	return 0;
}
/* ■ 설명 ■
입력 받은 문자열을 길이를 체크해서
6 ~ 9 자리 사이에 포함되면 'yes' 를
범위 밖이라면 'no' 를 출력한다.
*/
