#include <iostream>
using namespace std;

int main() {
	int a[10] = {}, b, c, d = -1; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) { b = s[n] - '0'; a[b]++; }
	b = a[6] + a[9]; c = (b / 2) + (b % 2);
	for (int n = 0; n < 10; n++) {
		if (n == 6 || n == 9 || d >= a[n]) { continue; }
		else if (d < a[n]) { d = a[n]; }
	}
	if (c < d) { cout << d; }
	else { cout << c; }
	return 0;
}
/* ■ 설명 ■
한 세트에 0 ~ 9 숫자 모양의 자석이 있다고 해보자. 
0 1 2 3 4 5 7 8 은 하나 씩 존재하지만,
6 9 는 서로 뒤집어서 사용해도 무방하다.

그렇다면 위의 숫자 모양 자석을 이용해서
주어진 호수 번호를 만들고자 한다면,
숫자 모양 자석이 몇 세트가 필요한지 출력한다.
=================================================

*/
