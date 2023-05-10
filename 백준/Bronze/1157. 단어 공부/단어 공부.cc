#include <iostream>
using namespace std;

int main() {
	int a[26] = {}, b, c, m = 0;
	char d; string e;
	cin >> e;
	for (int n = 0; n < size(e); n++) {
		b = e[n];
		if (64 < b && b < 91) { a[b - 65] += 1; }
		else if (96 < b && b < 123) { a[b - 97] += 1; }
	}
	for (int n = 0; n < 26; n++) { if (a[n] > m) { m = a[n]; c = n; } }	// 최댓값을 찾는 동시에 최댓값 자릿값도 찾기
	for (int n = 0; n < 26; n++) {
		if (n == c) { continue; }					// 최댓값이 담긴 자리는 검사 패스
		if (m == a[n]) { c = -1; break; }				// 최댓값이 중복 된다면, (c = -1) 를 담은 후에 반복문 종료 
	}
	if (c != -1) { d = c + 65; cout << d; }					// 최댓값이 중복 되지 않는 다면, 알파벳 자릿값으로 정상 출력 될 것
	else { cout << "?"; }
	return 0;
}
/* ■ 설명 ■

*/
